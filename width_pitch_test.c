/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_pitch_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 22:41:04 by lchety            #+#    #+#             */
/*   Updated: 2017/02/17 15:26:56 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	test()
{
	bool prefix;

	if check_pitch();
		flag_0 = false
		do_prefix(); //if pitch do prefix every time
		prefix_lossless = true;
		do_pitch();

	if check_width()
		if (flag_0)
			do_width();
			if (!prefix)
				prefix_lossy
			prefix = true
		else
			if (!prefix)
				prefix_lossless
			do_width();
			prefix = true

	#######################################################

	if prefix()

	if set_length()

	set_length


}

void check_width()
{
	if width && width > size + prefix_count()
		do_width();

}

void check_pitch()
{
	if pitch
		flag 0 = false;
		if pitch > size (dont take prefix size)
			do pitch

}


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
