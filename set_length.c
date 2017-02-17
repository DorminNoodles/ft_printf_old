/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 11:34:31 by lchety            #+#    #+#             */
/*   Updated: 2017/02/17 18:16:09 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_length_digit(t_print *dna)
{
	bool prefix;

	prefix = FALSE;
	if (CHECK_PITCH)
	{
		// printf("PITCH\n");
		dna->flag_0 = FALSE;
		dna->out = do_pitch(dna, TRUE);
		dna->out = prefix_lossless(dna);
		prefix = TRUE;
	}

	if (CHECK_WIDTH)
	{
		printf("WIDTH\n");
		printf("=> %s\n", dna->out);
		if (dna->flag_0)
		{
			//printf("BOB\n");
			dna->out = do_width(dna);
			printf("pouet => %s\n", dna->out);
			dna->out = prefix_lossy(dna);
			prefix = TRUE;
		}
		else
		{
			if (!dna->justify)
			{
				prefix_lossless(dna)  //    -50
				prefix = TRUE;
			}

			do_width(dna, prefix_include)	// push -50 or 50

			if (!prefix)
				prefix_lossless(dna);

			// if (!prefix)
			// 	dna->out = prefix_lossless(dna);
			// dna->out = do_width(dna);
		}
			printf("2=> %s\n", dna->out);
	}
	printf("2.5=>  %d   %s\n", prefix, dna->out);

	if (!prefix)
	{
		printf("WRONG");
		dna->out = prefix_lossless(dna);
	}
	printf("3=> %s\n", dna->out);

	return (dna->out);
}
