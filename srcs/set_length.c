/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 11:34:31 by lchety            #+#    #+#             */
/*   Updated: 2017/03/08 12:13:49 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_length_digit(t_print *dna)
{
	bool prefix;
	prefix = FALSE;
	if (CHECK_PITCH)
	{

		// printf("pitch\n");
		do_pitch(dna, FALSE);
		if(!dna->conv_o)
			prefix_lossless(dna);
		prefix = TRUE;
	}
	if (CHECK_WIDTH)
	{
		// printf("width\n");
		if (dna->flag_0)
		{
			// printf("dna->out1 = %s\n", dna->out);

			// printf("flag_0 \n");
			width_ectoplasme(dna, FALSE);
			// printf("dna->out2 = %s\n", dna->out);

			prefix_lossy(dna);
			// printf("dna->out 30 = %s\n", dna->out);

			prefix = TRUE;
		}
		else
		{
			// printf("pokemon \n");
			if (!dna->justify)
			{
				if (!prefix)
				{
					// printf("test \n");
					prefix_lossless(dna);  //    -50
				}
				prefix = TRUE;
			}
			if (prefix)
				width_ectoplasme(dna, TRUE);// push -50 or 50
			else
				width_ectoplasme(dna, FALSE);
			if (!prefix)
			{
				prefix_lossy(dna);
				prefix = TRUE;
			}
		}
	}
	// printf("here\n");
	// printf("test %s\n", dna->out);
	if (!prefix)
		prefix_lossless(dna);
	// printf("test %s\n", dna->out);
		// printf("set_length_digit=> %s\n", dna->out);
	return (dna->out);
}

char	*set_length_char(t_print *dna)
{
	// printf("dna->out2 => %s \n", dna->out);
	if (dna->pitch && dna->pitch_nb == 0 && !dna->conv_mod && !dna->conv_null)
		dna->out[0] = '\0';
	// printf("dna->out3 => %s \n", dna->out);
	dna->out = do_pitch(dna, TRUE);
	//ft_putstr("test fuck\n");
	ft_strlen(dna->out);
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
