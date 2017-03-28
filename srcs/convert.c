/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:09:10 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 16:53:58 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_null(t_print *dna)
{
	if (!(dna->out = ft_strnew(ft_strlen("(null)"))))
		exit(EXIT_FAILURE);
	ft_memcpy(dna->out, "(null)", ft_strlen("(null)"));
	set_length_char(dna);
	ft_putstr_buff(dna->out);
	dna->ret_nb += ft_strlen(dna->out);
	free(dna->out);
}

char	*compute_conv_mod(t_print *dna, va_list ap)
{
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * 2)))
		return (NULL);
	*dna->out = '%';
	dna->out = set_length_char(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
	return (dna->out);
}

void	compute_conv_null(t_print *dna, va_list ap)
{
	dna->out = set_length_char(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}

void	convert_extended(t_print *dna, va_list ap)
{
	if (dna->conv_x || dna->conv_lx)
		conv_x(dna, ap);
	else if (dna->conv_c && !dna->cast_l)
		conv_c(dna, ap);
	else if (dna->conv_lc || (dna->conv_c && dna->cast_l))
		conv_lc(dna, ap);
	else if (dna->conv_mod)
		dna->out = compute_conv_mod(dna, ap);
	else if (dna->conv_b)
		conv_b(dna, ap);
	else if (dna->conv_f)
		conv_f(dna, ap);
	else if (dna->conv_null)
		compute_conv_null(dna, ap);
}

void	convert(t_print *dna, va_list ap)
{
	if (dna->conv_s)
		conv_s(dna, ap);
	else if (dna->conv_ls)
		conv_ls(dna, ap);
	else if (dna->conv_p)
		conv_p(dna, ap);
	else if (dna->conv_d || dna->conv_i)
		conv_d(dna, ap);
	else if (dna->conv_ld)
		conv_ld(dna, ap);
	else if (dna->conv_o)
		conv_o(dna, ap);
	else if (dna->conv_lo)
		conv_lo(dna, ap);
	else if (dna->conv_u)
		conv_u(dna, ap);
	else if (dna->conv_lu)
		conv_lu(dna, ap);
	else
		convert_extended(dna, ap);
}
