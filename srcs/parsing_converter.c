/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_converter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:37:44 by lchety            #+#    #+#             */
/*   Updated: 2017/03/17 17:44:25 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		conv_switch_02(char c, t_print *dna)
{
	if (c == 'c')
		dna->conv_c = TRUE;
	if (c == 'C')
		dna->conv_lc = TRUE;
	if (c == 'x')
		dna->conv_x = TRUE;
	if (c == 'X')
		dna->conv_lx = TRUE;
	if (c == '%')
		dna->conv_mod = TRUE;
	if (c == 'b')
		dna->conv_b = TRUE;
	if (c == 'e')
		dna->conv_e = TRUE;
	if (c == 'f')
		dna->conv_f = TRUE;
}

static void		conv_switch(char c, t_print *dna)
{
	dna->conv = TRUE;
	if (c == 's')
		dna->conv_s = TRUE;
	if (c == 'S')
		dna->conv_ls = TRUE;
	if (c == 'p')
		dna->conv_p = TRUE;
	if (c == 'd')
		dna->conv_d = TRUE;
	if (c == 'D')
		dna->conv_ld = TRUE;
	if (c == 'i')
		dna->conv_i = TRUE;
	if (c == 'o')
		dna->conv_o = TRUE;
	if (c == 'O')
		dna->conv_lo = TRUE;
	if (c == 'u')
		dna->conv_u = TRUE;
	if (c == 'U')
		dna->conv_lu = TRUE;
	conv_switch_02(c, dna);
}

char			*parsing_converter(const char *format, t_print *dna)
{
	char *ret;

	ret = NULL;
	while (*format)
	{
		if ((ret = ft_strchr(STRING_CONV, *format)))
		{
			conv_switch(*ret, dna);
			return ((char*)format + 1);
		}
		else if (!(ret = ft_strchr(STRING_FLAG, *format)))
		{
			dna->conv_null = TRUE;
			dna->conv = TRUE;
			if (!(dna->out = (char*)ft_memalloc(sizeof(char) * 2)))
				exit(EXIT_FAILURE);
			dna->out[0] = *format;
			return ((char*)format + 1);
		}
		format++;
	}
	return ((char*)format);
}
