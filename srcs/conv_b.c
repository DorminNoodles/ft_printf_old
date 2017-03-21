/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:12:39 by lchety            #+#    #+#             */
/*   Updated: 2017/03/17 14:00:53 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_b(t_print *dna, va_list ap)
{
	intmax_t	n;

	n = exec_cast_unsigned(dna, ap);
	if (!(dna->out = ft_itoa_base(n, 2)))
		exit(EXIT_FAILURE);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}
