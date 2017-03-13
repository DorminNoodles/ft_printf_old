/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 14:01:18 by lchety            #+#    #+#             */
/*   Updated: 2017/03/13 20:58:30 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		parsing_format(const char *format, t_print *dna, va_list ap)
{
	int i;

	i = 0;
	while (*(format + i))
	{
		if (*(format + i) == '%')
		{
			reset_print(dna);
			i += parsing_dispatch(format + i, dna, ap);
			if (dna->conv)
				return (i);
		}
		else
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
	{
		format++;
	}
	return((char *)format);
}

/*
void	parsing_0(const char *format, t_print *dna, char *end)
{
	char c;

	format++;
	while (format < end)
	{
		if (*format == '0')
		{
			if(*(format - 1) != '.' && !ft_isdigit(*(format - 1)))
				dna->flag_0 = TRUE;
		}
		format++;
	}
}
*/

void	parsing_width(const char *format, t_print *dna, char *end)
{
	int nb;
	int save;

	nb = 0;
	save = 0;
	while (format < end && *format != '.')
	{
		nb = 0;
		if (ft_isdigit(*format))
		{
			while (ft_isdigit(*format))
			{
				nb *= 10;
				nb += *format - '0';
				if (nb > save)
					save = nb;
				format++;
			}
		}
		else
			format++;
	}
	dna->width = save;
}

int		parsing_dispatch(const char *format, t_print *dna, va_list ap)
{
	char *end;

	end = NULL;
	if(!(end = parsing_converter(format + 1, dna)))
		return (1);
	//parsing_0(format, dna, end);
	parsing_flags(format, dna, end);
	parsing_width(format, dna, end);
	parsing_pitch(format, dna, end, ap);
	parsing_cast(format, dna, end);
	parsing_star(format, dna, end, ap);
	if (dna->pitch_nb < 0)
	{
		dna->pitch = FALSE;
		dna->pitch_nb = 0;
	}
	if (dna->width < 0)
	{
		dna->justify = TRUE;
		dna->width = -dna->width;
	}
	silent_flags(dna);
	return (end - format);
}

void	pitch_nb(const char *format, t_print *dna, char *end)
{
	int i;

	while(format < end)
	{
		i = 1;
		if(*format == '.')
		{
			dna->pitch = TRUE;
			dna->pitch_nb = 0;
			while (*(format + i) >= '0' && *(format + i) <= '9')
			{
				dna->pitch_nb = dna->pitch_nb * 10;
				dna->pitch_nb += *(format + i) - '0';
				i++;
			}
		}
		format++;
	}
}

void	parsing_star(const char *format, t_print *dna, char *end, va_list ap)
{
	format++;
	while (format < end)
	{
		if (*format == '*')
		{
			if (*(format - 1) == '.')
			{
				dna->pitch_star = TRUE;
				dna->pitch_nb = va_arg(ap, int);
				dna->pitch = TRUE;
			}
			else
			{
				dna->width_star = TRUE;
				dna->width = va_arg(ap, int);
			}
		}
		format ++;
	}
}
