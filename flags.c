/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 10:39:10 by lchety            #+#    #+#             */
/*   Updated: 2017/02/22 14:22:11 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*flag_blk(t_print *dna)
{
	char	*tmp;
	int		size;

	tmp = dna->out;
	size = ft_strlen(dna->out);
	if (dna->flag_blk)
	{
		if (*dna->out != ' ' && *dna->out != '-')
		{
			if (!(dna->out = (char*)ft_memalloc(sizeof(char) * size + 2)))
				return (NULL);
			ft_memcpy(dna->out + 1, tmp, size);
			ft_memcpy(dna->out, " ", 1);
			free(tmp);
		}
	}
	return (dna->out);
}
