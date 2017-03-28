/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:22:27 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 17:01:20 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_d(t_print *dna, va_list ap)
{
	intmax_t nb;

	nb = exec_cast_signed(dna, ap);
	dna->pre_min = (nb < 0) ? TRUE : FALSE;
	nb = (nb < 0) ? nb * (-1) : nb;
	if (!(dna->out = ft_itoa_base(nb, 10)))
		exit(EXIT_FAILURE);
	if (nb == 0 && dna->pitch && !dna->pitch_nb)
		dna->out[0] = '\0';
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	if (dna->out[0] == '0' && !dna->pitch_nb)
		dna->out = flag_blk_lossy(dna);
	else
		dna->out = flag_blk(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}

void	conv_ld(t_print *dna, va_list ap)
{
	intmax_t	nb;

	nb = (intmax_t)(long)va_arg(ap, intmax_t);
	dna->pre_min = (nb < 0) ? TRUE : FALSE;
	nb = (nb < 0) ? nb * (-1) : nb;
	if (!(dna->out = ft_itoa_base(nb, 10)))
		exit(1);
	if (nb == 0 && dna->pitch && !dna->pitch_nb)
		dna->out[0] = '\0';
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	dna->out = flag_blk(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}
