/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:12:02 by lchety            #+#    #+#             */
/*   Updated: 2017/02/12 19:24:32 by lchety           ###   ########.fr       */
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
	size = ft_strlen(dna->out);
	if (!dna->pitch)
		size += prefix_count(dna);
	c = (dna->flag_0 && !dna->pitch) ? '0' : ' ';

	if (dna->width && (dna->width < (int)size))
	{
		//printf("hello\n");
		printf("%s\n", dna->out);
		printf("nb = %d", (int)sizeof(char) * (size));
		dna->out = (char*)ft_memalloc(sizeof(char) * (size + 1));

		printf("nb = %d", (int)prefix_count(dna));
		ft_memcpy(dna->out + prefix_count(dna), tmp, dna->base_size);
		printf("%s\n", dna->out);
		dna->out = prefix(dna);
		//si width est assez grand pour contenir dna->out (base_size) + les prefix alors on cree une string remplit de 0
		//Mais si il y a eu pitch alors on a deja inclus les prefix....

		//Ensuite on fou dna->out dans la nouvelle string et si on a le flag 0..... fuuuck
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
