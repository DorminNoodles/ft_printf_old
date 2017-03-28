/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:04:58 by lchety            #+#    #+#             */
/*   Updated: 2017/03/28 14:42:02 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_p(t_print *dna, va_list ap)
{
	unsigned long	a;
	void			*tmp;

	a = 0;
	tmp = va_arg(ap, void *);
	dna->htag = TRUE;
	a = (unsigned long)tmp;
	if (!(dna->out = ft_itoa_base(a, 16)))
		exit(EXIT_FAILURE);
	if (!tmp && dna->pitch && !dna->pitch_nb)
		dna->out[0] = '\0';
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}
