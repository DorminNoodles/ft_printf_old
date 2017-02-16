/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_pitch_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 22:41:04 by lchety            #+#    #+#             */
/*   Updated: 2017/02/16 23:39:49 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	search()
{
	if (dna->pitch && dna->pitch > dna->out)
	{
		do_pitch(dna);
	}

	if (dna->width && dna->pitch > dna->out)
	{
		do_width(dna);
	}

	if ()

}

char	*width_pitch(t_print *dna)
{
	if (dna->pitch)
	{
		if (dna->pitch > ft_strlen(dna->out))
		{
			do_pitch(dna);

			if (dna->width)
			{
				if (dna->width > ft_strlen(dna->out) + prefix_count(dna))
				{
					prefix_lossy(dna);

				}
				else
				{
					prefix_lossless(dna);
				}
			}
			else
			{
				prefix_lossless(dna);
			}
		}
		else
		{
			if (dna->width)
			{
				if (dna->width > ft_strlen(dna->out) + prefix_count(dna))
				{

				}
				else
				{

				}
			}
		}
	}
	else
	{


	}

}
