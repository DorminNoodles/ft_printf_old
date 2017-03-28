/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 13:59:46 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 15:58:57 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parsing_flags(const char *fmt, t_print *dna, char *end)
{
	fmt++;
	while (fmt < end)
	{
		if (*fmt == ' ')
			dna->flag_blk = TRUE;
		if (*fmt == '-')
			dna->justify = TRUE;
		if (*fmt == '#')
			dna->htag = TRUE;
		if (*fmt == '+')
			dna->pre_pls = TRUE;
		if (*fmt == '0' && *(fmt - 1) != '.' && !ft_isdigit(*(fmt - 1)))
			dna->flag_0 = TRUE;
		fmt++;
	}
}

void	silent_flags(t_print *dna)
{
	if (dna->conv_x || dna->conv_lx)
	{
		dna->flag_blk = FALSE;
		dna->pre_pls = FALSE;
	}
	if (dna->pre_pls)
		dna->flag_blk = FALSE;
	if (dna->justify)
		dna->flag_0 = FALSE;
	if (dna->pitch && dna->conv_d)
		dna->flag_0 = FALSE;
}
