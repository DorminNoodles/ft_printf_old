/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:12:02 by lchety            #+#    #+#             */
/*   Updated: 2017/02/13 12:26:35 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*do_width(t_print *dna)
{
	char *tmp;
	int i;
	size_t size;
	char c;

	i = 0;
	tmp = dna->out;
	size = dna->width;
	if (!dna->pitch)
		size += prefix_count(dna);
	c = (dna->flag_0 && !dna->pitch) ? '0' : ' ';

	if (dna->width)
	{
		if (dna->pitch)
		{
			printf("ft_strlen %d\n", (int)ft_strlen(dna->out));
			if (dna->width > ft_strlen(dna->out))
			{
				printf("do_width 2\n");
				dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
				ft_memset(dna->out, ' ', dna->width);

				if (dna->justify)
				{
					ft_memcpy(dna->out + (dna->width - ft_strlen(tmp)), tmp, ft_strlen(tmp));
				}
				else
				{
					ft_memcpy(dna->out, tmp, ft_strlen(tmp));
				}
				free(tmp);
			}


		}
	}

/*
	if (dna->pitch)
	{


	}
	else
	{


	}
*/
/*
	if (dna->width && dna->width > dna->base_size)
	{
		//printf("compute_width\n");
		tmp = dna->out;
		dna->out = (char*)ft_memalloc(1 * (dna->width + 1));
		while (i < dna->width)
		{
			*(dna->out + i) = c;
			i++;
		}
		if (dna->justify)
			ft_memcpy(dna->out, tmp, ft_strlen(tmp));
		else
			ft_strcpy(dna->out + (i - dna->base_size), tmp);
		free(tmp);
	}
*/


	return (dna->out);
}
