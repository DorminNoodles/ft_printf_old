/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 14:01:18 by lchety            #+#    #+#             */
/*   Updated: 2017/02/10 11:20:07 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		parsing_format(const char *format, t_print *dna)
{
	int i;

	i = 0;
	while (*(format + i))
	{
		if (*(format + i) == '%')
		{
			reset_print(dna);
			i += parsing_dispatch(format + i, dna);
			if (*(format + i) == '%' && !dna->conv)
			{
				ft_putchar('%');
				dna->ret_nb++;
				i++;
			}
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

void	parsing_width(const char *format, t_print *dna, char *end)
{
	int nb;
	int save;

	save = 0;
	nb = 0;
	while (format < end)
	{
		if (ft_isdigit(*format))
		{
			nb = nb * 10;
			nb += *format - '0';
			save = nb;
		}
		else
			nb = 0;
		format++;
	}
	dna->width = save;
	// printf("TEST02 == %d\n", dna->width);
}

int		parsing_dispatch(const char *format, t_print *dna)
{
	char *end;

	end = NULL;
	if(!(end = parsing_converter(format + 1, dna)))
	{
		return (1);
	}
	//printf("test\n");
	parsing_0(format, dna, end);
	parsing_width(format, dna, end);
	parsing_htag(format, dna, end);
	parsing_justify(format, dna, end);
	parsing_pitch(format, dna, end);
	parsing_cast(format, dna, end);

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
	dna->pitch_nb = 0;
	while(format < end)
	{
		i = 1;
		if(*format == '.')
		{
			dna->pitch = TRUE;
			dna->width = 0;
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
void	parsing_pitch(const char *format, t_print *dna, char *end)
{
	pitch_nb(format, dna, end);
	pitch_star(format, dna, end);
	//pitch_dollar(format, dna, end);
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
