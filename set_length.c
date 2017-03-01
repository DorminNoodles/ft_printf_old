/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 11:34:31 by lchety            #+#    #+#             */
/*   Updated: 2017/03/01 14:32:34 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_length_digit(t_print *dna)
{
	bool prefix;
	prefix = FALSE;
	if (CHECK_PITCH)
	{
		do_pitch(dna, FALSE);
		if(!dna->conv_o)
			prefix_lossless(dna);
		prefix = TRUE;
	}
	if (CHECK_WIDTH)
	{
		if (dna->flag_0)
		{
			width_ectoplasme(dna, FALSE);
			prefix_lossy(dna);
			prefix = TRUE;
		}
		else
		{
			if (!dna->justify)
			{
				if (!prefix)
				{
					prefix_lossless(dna);  //    -50
				}
				prefix = TRUE;
			}
			if (prefix)
				width_ectoplasme(dna, TRUE);	// push -50 or 50
			else

				width_ectoplasme(dna, FALSE);
			if (!prefix)
			{
				prefix_lossy(dna);
				prefix = TRUE;
			}
		}
	}
	if (!prefix)
		prefix_lossless(dna);
	return (dna->out);
}

char	*set_length_char(t_print *dna)
{
	if (dna->pitch && dna->pitch_nb == 0 && !dna->conv_mod)
		dna->out[0] = '\0';
	dna->out = do_pitch(dna, TRUE);
	if (dna->width > ft_strlen(dna->out))
		dna->out = width_ectoplasme(dna, TRUE);
	return (dna->out);
}


void	set_length_wchar(t_print *dna)
{
	wchar_t *tmp;

	if(dna->pitch)
		pitch_ls(dna);
	if(dna->width > count_unicode((wchar_t*)dna->out))
		width_ls(dna);
}
