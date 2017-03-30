/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 14:01:18 by lchety            #+#    #+#             */
/*   Updated: 2017/03/30 13:57:18 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		parsing_format(const char *format, t_print *dna, va_list ap)
{
	int	i;

	i = 0;
	while (*(format + i))
	{
		if (*(format + i) == '{')
			i += pars_color(format + i);
		if (*(format + i) == '%')
		{
			reset_print(dna);
			i += parsing_dispatch(format + i, dna, ap);
			if (dna->conv)
				return (i);
		}
		else if (*(format + i))
		{
			ft_putchar(*(format + i));
			dna->ret_nb++;
			i++;
		}
	}
	return (0);
}

char	*parsing_end(const char *format)
{
	while (*format)
		format++;
	return ((char *)format);
}

void	parsing_width(const char *fmt, t_print *dna, char *end)
{
	int nb;
	int save;

	nb = 0;
	save = 0;
	while (fmt < end && *fmt != '.')
	{
		nb = 0;
		if (ft_isdigit(*fmt))
		{
			if (dna->width_pos == NULL)
				dna->width_pos = (char*)fmt;
			while (ft_isdigit(*fmt))
			{
				nb *= 10;
				nb += *fmt - '0';
				if (nb > save)
					save = nb;
				fmt++;
			}
		}
		else
			fmt++;
	}
	dna->width = save;
}

int		parsing_dispatch(const char *format, t_print *dna, va_list ap)
{
	char *end;

	end = NULL;
	if (!(end = parsing_converter(format + 1, dna)))
		return (1);
	parsing_flags(format, dna, end);
	parsing_width(format, dna, end);
	parsing_pitch(format, dna, end, ap);
	parsing_cast(format, dna, end);
	parsing_star(format, dna, end, ap);
	if (dna->pitch_nb < 0)
	{
		dna->pitch_nb = FALSE;
		dna->pitch = FALSE;
	}
	if (dna->width < 0)
	{
		dna->justify = TRUE;
		dna->width = -dna->width;
	}
	silent_flags(dna);
	return (end - format);
}

void	parsing_star(const char *fmt, t_print *dna, char *end, va_list ap)
{
	int ret;

	fmt++;
	while (fmt < end)
	{
		if (*fmt == '*')
		{
			ret = va_arg(ap, int);
			if (*(fmt - 1) == '.')
			{
				dna->pitch_star = TRUE;
				dna->pitch_nb = ret;
				dna->pitch = TRUE;
			}
			else
			{
				if ((dna->width_pos && fmt > dna->width_pos) || !dna->width_pos)
				{
					dna->width_star = TRUE;
					dna->width = ret;
				}
			}
		}
		fmt++;
	}
}
