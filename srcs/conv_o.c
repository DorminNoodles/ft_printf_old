/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 14:47:59 by lchety            #+#    #+#             */
/*   Updated: 2017/03/15 14:56:49 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_o(t_print *dna, va_list ap)
{
	uintmax_t n;

	n = 0;
	n = exec_cast_unsigned(dna, ap);
	if (!(dna->out = ft_itoa_base(n, 8)))
		exit(EXIT_FAILURE);
	dna->pre_pls = FALSE;
	if (dna->pitch && !dna->pitch_nb && !dna->htag)
		dna->out[0] = '\0';
	if (n == 0)
		dna->htag = FALSE;
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}

void	conv_lo(t_print *dna, va_list ap)
{
	uintmax_t n;

	n = 0;
	n = cast_unsigned_wide(dna, ap);
	dna->pre_pls = FALSE;
	if (!(dna->out = ft_itoa_base(n, 8)))
		exit(EXIT_FAILURE);
	if (dna->pitch && !dna->pitch_nb && !dna->htag)
		dna->out[0] = '\0';
	if (n == 0)
		dna->htag = FALSE;
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}
