/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 14:27:07 by lchety            #+#    #+#             */
/*   Updated: 2017/02/09 22:16:21 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_print(t_print *dna)
{
	dna->conv = FALSE;
	dna->conv_d = FALSE;
	dna->conv_ld = FALSE;
	dna->conv_i = FALSE;
	dna->conv_o = FALSE;
	dna->conv_c = FALSE;
	dna->conv_lc = FALSE;
	dna->conv_ls = FALSE;
	dna->conv_s = FALSE;
	dna->conv_p = FALSE;
	dna->conv_x = FALSE;
	dna->conv_lx = FALSE;
	dna->flag_0 = FALSE;
	dna->htag = FALSE;
	dna->justify = FALSE;
	dna->width = 0;
	dna->base_size = 0;
	dna->cast_h = FALSE;
	dna->cast_hh = FALSE;
	dna->cast_l = FALSE;
	dna->cast_ll = FALSE;
	dna->cast_z = FALSE;
	dna->cast_j = FALSE;
	dna->pitch = FALSE;
	dna->pitch_nb = 0;
	dna->pitch_dollar = 0;
	dna->pitch_star = 0;
}
