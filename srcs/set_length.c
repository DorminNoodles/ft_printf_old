/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 11:34:31 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 16:07:18 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		check_pitch(t_print *dna, t_bool *prefix)
{
	if (dna->pitch)
		dna->flag_0 = FALSE;
	if (dna->pitch && dna->pitch_nb > ft_strlen(dna->out))
	{
		do_pitch(dna, FALSE);
		if (!dna->conv_o)
			prefix_lossless(dna);
		*prefix = TRUE;
	}
}

static void		check_width(t_print *dna, t_bool *prefix)
{
	if (dna->width && dna->width > ft_strlen(dna->out))
	{
		if (dna->flag_0)
		{
			width_ectoplasme(dna, FALSE);
			*prefix = prefix_lossy(dna);
		}
		else
		{
			if (!dna->justify)
			{
				if (!*prefix)
					prefix_lossless(dna);
				*prefix = TRUE;
			}
			if (*prefix)
				width_ectoplasme(dna, TRUE);
			else
				width_ectoplasme(dna, FALSE);
			if (!*prefix)
				*prefix = prefix_lossy(dna);
		}
	}
}

char			*set_length_digit(t_print *dna)
{
	t_bool prefix;

	prefix = FALSE;
	check_pitch(dna, &prefix);
	check_width(dna, &prefix);
	if (!prefix)
		prefix_lossless(dna);
	return (dna->out);
}

char			*set_length_char(t_print *dna)
{
	if (dna->pitch && dna->pitch_nb == 0 && !dna->conv_mod && !dna->conv_null)
		dna->out[0] = '\0';
	dna->out = do_pitch(dna, TRUE);
	ft_strlen(dna->out);
	if (dna->width > ft_strlen(dna->out))
		dna->out = width_ectoplasme(dna, TRUE);
	return (dna->out);
}

void			set_length_wchar(t_print *dna)
{
	wchar_t *tmp;

	if (dna->pitch)
		pitch_ls(dna);
	if (dna->width > count_unicode((wchar_t*)dna->out))
		width_ls(dna);
}
