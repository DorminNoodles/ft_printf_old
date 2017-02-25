/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 14:01:18 by lchety            #+#    #+#             */
/*   Updated: 2017/02/24 18:14:34 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		parsing_format(const char *format, t_print *dna, va_list ap)
{
	int i;

	// printf("Schtroumpfs !\n");
	i = 0;
	while (*(format + i))
	{
		if (*(format + i) == '%')
		{
			reset_print(dna);
			i += parsing_dispatch(format + i, dna, ap);

			// printf("parsing dispatch return : %d\n", i);
			//if (*(format + i) == '%' && !dna->conv)
			//{
				//ft_putchar('%');
				//dna->ret_nb++;
				//i++;
			//}
			if (dna->conv)
				return (i);
		}
		else
		{
			ft_putchar(*(format + i));
			dna->ret_nb++;
			i++;
		}
		// printf("parsing dispatch return : %c\n", *format);
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

void	parsing_0(const char *format, t_print *dna, char *end)
{
	while (format < end)
	{
		if (*format == '0')
		{
			if(format - 1 && !ft_isdigit(*(format - 1)))
				dna->flag_0 = TRUE;
		}
		format++;
	}
}

bool	parsing_pls(const char *format, t_print *dna, char *end)
{
	while (format < end)
	{
		if (*format == '+')
			return (TRUE);
		format++;
	}
	return (FALSE);
}

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

/*
void	parsing_width(const char *format, t_print *dna, char *end)
{
	int nb;
	int save;

	save = 0;
	nb = 0;
	while (format < end && !ft_isdigit(*format))
	{
		if (*format == '.')
			return;
		format++;
	}
	while (ft_isdigit(*format))
	{
		nb = nb * 10;
		nb += *format - '0';
		save = nb;
		format++;
	}
	dna->width = save;
	// printf("parsing => width == %d\n", dna->width);
	// printf("TEST02 == %d\n", dna->width);
}
*/

int		parsing_dispatch(const char *format, t_print *dna, va_list ap)
{
	char *end;

	end = NULL;
	if(!(end = parsing_converter(format + 1, dna)))
		return (1);
	parsing_0(format, dna, end);
	parsing_blk(format, dna, end);
	if((dna->pre_pls = parsing_pls(format, dna, end)))
		dna->flag_blk = FALSE;
	parsing_width(format, dna, end);
	parsing_htag(format, dna, end);
	parsing_justify(format, dna, end);
	parsing_pitch(format, dna, end, ap);
	parsing_cast(format, dna, end);

	//printf("parsing => width == %d\n", dna->width);
	// else
		// printf("parsing conv : %c\n", end);

	//parsing_flags();
	//printf("\n####### end - format =  %d\n", (int)(end - format));

	// printf("end = %p\n", end);
	//printf("format = %p\n", format);

	return (end - format);
}

void	parsing_htag(const char	*format, t_print *dna, char *end)
{
	while (format < end)
	{
		if (*format == '#')
			dna->htag = TRUE;
		format++;
	}
}

void	parsing_justify(const char *format, t_print *dna, char *end)
{
	while (format < end)
	{
		if (*format == '-')
		{
			dna->justify = TRUE;
			dna->flag_0 = FALSE;
		}
		format++;
	}
}

void	pitch_nb(const char *format, t_print *dna, char *end)
{
	int i;
	//pitch_nb .3
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
	//printf("test pitch_nb %d\n", dna->pitch_nb);
}

void	pitch_star(const char *format, t_print *dna, char *end)
{
	//pitch .*
	dna->pitch_star = 0;
	while (format < end)
	{
		if(*format == '*')
			dna->pitch_star++;
		format ++;
	}
	//printf("pitch_star = %d\n", dna->pitch_star);
}

/*
void	pitch_dollar(const char *format, t_print *dna, char *end)
{
	//pitch *5$

}
*/
void	parsing_pitch(const char *format, t_print *dna, char *end, va_list ap)
{
	pitch_nb(format, dna, end);
	pitch_star(format, dna, end);
	if (dna->pitch_star)
		dna->pitch_nb = va_arg(ap, int);

	if (dna->pitch)
		dna->flag_0 = FALSE;
}

void	parsing_blk(const char	*format, t_print *dna, char *end)
{
	while (format < end)
	{
		if (*format == ' ')
			dna->flag_blk = TRUE;
		format++;
	}
}

/*
void parsing_format(const char *format)
{
	int i;

	i = 0;
	//printf("^^^^^^^^^^^^^^^^    %s \n", format);
	while (*(format + i))
	{
		//printf("###############  %c \n", *(format + i));
		if (*(format + i) == '%')
		{
			if((flags_parsing(format + i + 1)))
			{
				format = flags_parsing(format + i + 1);
				i = 0;
			}
			printf(" ### %c  ####\n", *format);
		}
		ft_putchar(*(format + i));
		i++;
	}

}
*/
/*
char	*flags_parsing(const char *format)
{
	char *end_flags;

	if((end_flags = find_end(format)))
		return (end_flags);
	return (NULL);
	printf("end flags : %c\n", *end_flags);
}

char	*find_end(const char *format)
{
	//printf("test %c\n", *format);
	while (*format && (ft_strchr(flags_string, *format)))
	{
		format++;
	}
	return ((char*)format);
}
*/
//tout ce qui n est pas un flag arrete le parsing des flags sauf pour le $ qui ne l arrete que si il est seul avec un nombre ou un * devant il est vu comme un flag
