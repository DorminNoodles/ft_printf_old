/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 11:34:31 by lchety            #+#    #+#             */
/*   Updated: 2017/02/26 22:02:00 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_length_digit(t_print *dna)
{
	bool prefix;
	// printf("test 02 : %s\n", dna->out);
	prefix = FALSE;
	if (CHECK_PITCH)
	{
		// printf("in_pitch\n");
		dna->out = do_pitch(dna, FALSE);
		if(!dna->conv_o)
			dna->out = prefix_lossless(dna);
		prefix = TRUE;
	}
	// printf("test 02 : %s\n", dna->out);
	if (CHECK_WIDTH)
	{
		// printf("in width\n");
		// printf("test 03 : %s\n", dna->out);
		if (dna->flag_0)
		{
			dna->out = width_ectoplasme(dna, FALSE);
			dna->out = prefix_lossy(dna);
			//printf("test = %s\n", dna->out);
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
			// printf("test 06 : %s\n", dna->out);
			// printf("debug %d\n", prefix);
			if (prefix)
				width_ectoplasme(dna, TRUE);	// push -50 or 50
			else
				width_ectoplasme(dna, FALSE);

			// printf("test 07 : %s\n", dna->out);
			// printf("bip1 = %s\n", dna->out);
			if (!prefix)
			{
				prefix_lossy(dna);
				prefix = TRUE;
			}
			// printf("bip2 = %s\n", dna->out);
		}
	}
	// printf("test 02 : %s\n", dna->out);
	// printf("bip = %s\n", dna->out);
	//printf("prefix %d\n", prefix);
	if (!prefix)
	{
		// printf("here 1 \n");
		dna->out = prefix_lossless(dna);
	}
	// printf("bip = %s\n", dna->out);
	// printf("test 02 : %s\n", dna->out);
	return (dna->out);
}

char	*set_length_char(t_print *dna)
{
	// printf("out =>%s\n", dna->out);
	// printf("test = %s\n", dna->out);
	if (dna->pitch && dna->pitch_nb == 0 && !dna->conv_mod)
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
