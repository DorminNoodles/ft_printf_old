/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 11:34:31 by lchety            #+#    #+#             */
/*   Updated: 2017/02/20 11:20:46 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_length_digit(t_print *dna)
{
	bool prefix;

	// printf("Test 1:%s#\n", dna->out);
	prefix = FALSE;
	if (CHECK_PITCH)
	{
		// printf("PITCH\n");
		// printf("Test 1:%s#\n", dna->out);
		dna->out = do_pitch(dna, TRUE);
		// printf("Test 2:%s#\n", dna->out);
		// printf("Test 2:%s#\n", dna->out);
		if(!dna->conv_o)
			dna->out = prefix_lossless(dna);
		// printf("Test 4:%s#\n", dna->out);
		// printf("Test 3:%s#\n", dna->out);
		prefix = TRUE;
	}

	if (CHECK_WIDTH)
	{
		// printf("WIDTH\n");
		// printf("=> %s\n", dna->out);
		if (dna->flag_0)
		{
			dna->out = width_ectoplasme(dna, FALSE);
			// printf("pouet => %s\n", dna->out);
			dna->out = prefix_lossy(dna);
			prefix = TRUE;
		}
		else
		{
			if (!dna->justify)
			{
				// printf("Test 6:%s#\n", dna->out);
				// printf("BOB\n");
				if (!prefix)
				{
					// printf("Test 7:%s#\n", dna->out);
					// printf("YY*&^&*()\n");
					prefix_lossless(dna);  //    -50
				}
				prefix = TRUE;
			}
			// printf("7.5 => %s\n", dna->out);
			// printf("Test 8:%s#\n", dna->out);
			width_ectoplasme(dna, TRUE);	// push -50 or 50
			// printf("Test 9:%s#\n", dna->out);
			// printf("8 => %s\n", dna->out);
			if (!prefix)
			{
				// printf("Test10:%s#\n", dna->out);
				prefix_lossless(dna);
			}
			// if (!prefix)
			// 	dna->out = prefix_lossless(dna);
			// dna->out = do_width(dna);
		}
			// printf("2=> %s\n", dna->out);
	}
	// printf("2.5=>  %d   %s\n", prefix, dna->out);

	if (!prefix)
	{
		// printf("TEST");
		dna->out = prefix_lossless(dna);
	}
	// printf("3=> %s\n", dna->out);

	return (dna->out);
}

char	*set_length_char(t_print *dna)
{

	return (dna->out);
}
