/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_converter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:37:44 by lchety            #+#    #+#             */
/*   Updated: 2017/02/10 14:01:20 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static void conv_switch(char c, t_print *dna)
{
	dna->conv = TRUE;
	if (c == 'd')
		dna->conv_d = TRUE;
	if (c == 'D')
		dna->conv_ld = TRUE;
	if (c == 'i')
		dna->conv_i = TRUE;
	if (c == 'o' || c == 'O')
		dna->conv_o = TRUE;
	if (c == 'c')
		dna->conv_c = TRUE;
	if (c == 'C')
		dna->conv_lc = TRUE;
	if (c == 's')
		dna->conv_s = TRUE;
	if (c == 'S')
		dna->conv_ls = TRUE;
	if (c == 'x')
		dna->conv_x = TRUE;
	if (c == 'X')
		dna->conv_lx = TRUE;
	if (c == 'p')
		dna->conv_p = TRUE;
}

char	*parsing_converter(const char *format, t_print *dna)
{
	char *ret;

	ret = NULL;
	while (*format)
	{
		if (*format != '%')
		{
			if ((ret = ft_strchr(STRING_CONV, *format)))
			{
				conv_switch(*ret, dna);
				return ((char *)format + 1);
			}
			format++;
		}
		else
			return ((char *)format);
	}
	//printf(":-)\n");
	return (NULL);
}
