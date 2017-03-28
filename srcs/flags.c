/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 10:39:10 by lchety            #+#    #+#             */
/*   Updated: 2017/03/17 16:36:04 by lchety           ###   ########.fr       */
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
				exit(EXIT_FAILURE);
			ft_memcpy(dna->out + 1, tmp, size);
			ft_memcpy(dna->out, " ", 1);
			free(tmp);
		}
	}
	return (dna->out);
}

char	*flag_blk_lossy(t_print *dna)
{
	if (dna->flag_blk && dna->out)
		dna->out[0] = ' ';
	return (dna->out);
}
