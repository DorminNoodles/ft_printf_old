/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 15:09:23 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 18:42:30 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_u(t_print *dna, va_list ap)
{
	uintmax_t nb;

	dna->pre_pls = FALSE;
	nb = exec_cast_unsigned(dna, ap);
	if (!(dna->out = ft_itoa_base(nb, 10)))
		exit(1);
	if (dna->pitch && dna->pitch_nb == 0)
		dna->out[0] = '\0';
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}

void	conv_lu(t_print *dna, va_list ap)
{
	uintmax_t nb;

	dna->pre_pls = FALSE;
	nb = va_arg(ap, uintmax_t);
	if (!(dna->out = ft_itoa_base(nb, 10)))
		exit(1);
	if (dna->pitch && dna->pitch_nb == 0)
		dna->out[0] = '\0';
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}
