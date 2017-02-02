/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 14:27:07 by lchety            #+#    #+#             */
/*   Updated: 2017/02/02 22:39:04 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_print(t_print *conv_info)
{
	conv_info->conv = FALSE;
	conv_info->conv_d = FALSE;
	conv_info->conv_ld = FALSE;
	conv_info->conv_c = FALSE;
	conv_info->conv_lc = FALSE;
	conv_info->conv_ls = FALSE;
	conv_info->conv_s = FALSE;
	conv_info->conv_p = FALSE;
	conv_info->conv_x = FALSE;
	conv_info->flag_0 = FALSE;
	conv_info->htag = FALSE;
	conv_info->justify = FALSE;
	conv_info->width = 0;
	conv_info->base_size = 0;
	conv_info->cast_h = FALSE;
	conv_info->cast_hh = FALSE;
	conv_info->cast_l = FALSE;
	conv_info->cast_ll = FALSE;
	conv_info->cast_z = FALSE;
	conv_info->cast_j = FALSE;
}
