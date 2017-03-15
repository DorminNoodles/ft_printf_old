/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 14:01:18 by lchety            #+#    #+#             */
/*   Updated: 2017/03/15 17:09:32 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

char	*switch_color(const char *str)
{
	char *find;

	find =  NULL;
	if ((find = ft_strstr(str, "black")))
		ft_putstr(BLACK);
	if ((find = ft_strstr(str, "red")))
		ft_putstr(RED);
	if ((find = ft_strstr(str, "green")))
		ft_putstr(GREEN);
	if ((find = ft_strstr(str, "yellow")))
		ft_putstr(YELLOW);
	if ((find = ft_strstr(str, "blue")))
		ft_putstr(BLUE);
	if ((find = ft_strstr(str, "magenta")))
		ft_putstr(MAGENTA);
	if ((find = ft_strstr(str, "cyan")))
		ft_putstr(CYAN);
	if ((find = ft_strstr(str, "white")))
		ft_putstr(WHITE);
	if ((find = ft_strstr(str, "eoc")))
		ft_putstr(NOCOLOR);
	return (find);
}

int p_color(const char * fmt)
{
	int i;
	char *end;
	char *tmp;

	end = NULL;
	i = 0;
	if (*fmt == '{')
		end = ft_strchr(fmt, '}');
	else
		return (0);
	tmp = ft_strsub(fmt, 0, end - fmt);
	if(!switch_color(tmp))
		return (0);
	free(tmp);
	return ((end - fmt) + 1);
}

int		parsing_format(const char *format, t_print *dna, va_list ap)
{
	int i;

	i = 0;
	while (*(format + i))
	{
		i += p_color(format + i);
		//
		// if (*(format + i) == '{')
		// {
		//
		// }
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
	if(!(end = parsing_converter(format + 1, dna)))
		return (1);
	//parsing_0(format, dna, end);
	parsing_flags(format, dna, end);
	parsing_width(format, dna, end);
	// printf("width => %d\n", dna->width);
	parsing_pitch(format, dna, end, ap);
	parsing_cast(format, dna, end);
	parsing_star(format, dna, end, ap);
	// printf("width => %d\n", dna->width);
	if (dna->pitch_nb < 0)
	{
		dna->pitch_nb = dna->pitch = FALSE;
		//dna->pitch_nb = 0;
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
		fmt ++;
	}
}
