/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:12:02 by lchety            #+#    #+#             */
/*   Updated: 2017/02/13 16:08:17 by lchety           ###   ########.fr       */
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
			// printf("ft_strlen %d\n", (int)ft_strlen(dna->out));
			// printf("width %d\n", dna->width);
			if (dna->width > ft_strlen(dna->out))
			{
				printf("bob %s\n", dna->out);
				dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
				ft_memset(dna->out, ' ', dna->width);

				if (dna->justify)
				{
					ft_memcpy(dna->out, tmp, ft_strlen(tmp));
				}
				else
				{
					//printf("do_width 2  ");
					ft_memcpy(dna->out + (dna->width - ft_strlen(tmp)), tmp, ft_strlen(tmp));
				}
				free(tmp);
			}
		}
		else //if no pitch
		{
			if (dna->flag_0)
			{
				printf("flag_0\n");
			}
			else // no flag_0
			{
				if (dna->width > ft_strlen(tmp) + prefix_count(dna))
				{
					dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
					if (!dna->out)
						return (NULL);
					ft_memset(dna->out, ' ', dna->width);
					add_prefix(&tmp, dna);
					if (!tmp)
						return (NULL);
					if(dna->justify)
					{
						ft_memcpy(dna->out, tmp, ft_strlen(tmp));
					}
					else
					{
						ft_memcpy(dna->out + (dna->width - ft_strlen(tmp)), tmp, ft_strlen(tmp));
					}
				}
				else
				{

				}

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
