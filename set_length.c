/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 11:34:31 by lchety            #+#    #+#             */
/*   Updated: 2017/02/22 13:42:39 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_length_digit(t_print *dna)
{
	bool prefix;

	prefix = FALSE;
	if (CHECK_PITCH)
	{
		dna->out = do_pitch(dna, FALSE);
		if(!dna->conv_o)
			dna->out = prefix_lossless(dna);
		prefix = TRUE;
	}

	if (CHECK_WIDTH)
	{
		if (dna->flag_0)
		{
			dna->out = width_ectoplasme(dna, FALSE);
			dna->out = prefix_lossy(dna);
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
			width_ectoplasme(dna, TRUE);	// push -50 or 50
			if (!prefix)
				prefix_lossless(dna);
		}
	}
	if (!prefix)
		dna->out = prefix_lossless(dna);
	return (dna->out);
}

char	*set_length_char(t_print *dna)
{
	// printf("out =>%s\n", dna->out);
	if (dna->pitch && dna->pitch_nb == 0)
	{
		dna->out[0] = '\0';
		return (dna->out);
	}
	// printf("out => %s\n", dna->out);
	dna->out = do_pitch(dna, TRUE);
	// printf("out =>%s\n", dna->out);
	if (dna->width > ft_strlen(dna->out))
		dna->out = width_ectoplasme(dna, TRUE);
	//dna->out = width_ectoplasme(dna, TRUE);
	// printf("out => %s\n", dna->out);

		// printf("PITCH !\n");
		// printf("pitch nb = %d\n", dna->pitch_nb);
	return (dna->out);
}
