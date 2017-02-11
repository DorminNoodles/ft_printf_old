/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:50:34 by lchety            #+#    #+#             */
/*   Updated: 2017/02/11 20:17:37 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*prefix(t_print *dna)
{
	if ((dna->conv_x || dna->conv_lx) && dna->htag)
	{
		dna->ret_nb += 2;
		return("0x");
	}
	if (dna->pre_neg)
	{
		if (dna->width < dna->base_size)
		{
			dna->ret_nb++;
			return ("-");
		}
	}
	return ("");
}
