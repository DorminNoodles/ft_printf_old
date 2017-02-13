/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:50:34 by lchety            #+#    #+#             */
/*   Updated: 2017/02/13 15:51:04 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*prefix(t_print *dna)
{
	if ((dna->conv_x || dna->conv_lx) && dna->htag)
	{
		dna->ret_nb += 2;
		return("0x");
	}
	if (dna->pre_pls && !dna->pre_min)
	{
		if (dna->width < dna->base_size)
		{
			dna->ret_nb++;
			return ("+");
		}
	}
	if (dna->pre_min)
	{
		//dna->ret_nb++;
		return ("-");
	}
	return ("\0");
}

size_t	prefix_count(t_print *dna)
{
	if (dna->htag && (dna->conv_x || dna->conv_lx))
		return (2);
	if (dna->pre_min)
		return (1);
	if (dna->pre_pls)
		return (1);
	return (0);
}

char	*d_prefix(t_print *dna)
{
	char	*tmp;
	uintmax_t size;

	size = (int)ft_strlen(dna->out);
	tmp = dna->out;
	if (dna->pre_min)
	{
		dna->out = (char*)ft_memalloc(sizeof(char) * (size + 2));
		ft_memcpy(dna->out + 1, tmp, size);
		ft_memcpy(dna->out, "-", 1);
		//printf("test THX : %s\n", dna->out);
		ft_memdel((void**)&tmp);
	}
	return (dna->out);
}

char	*add_prefix(char **str, t_print *dna)
{
	char *tmp;

	// printf("test == %s\n", str);
	tmp = *str;
	// printf("Hey\n");
	*str = (char*)ft_memalloc(sizeof(char) * (ft_strlen(dna->out) + prefix_count(dna) + 1));
	if (!str)
		return (NULL);
	// printf("Hey 2\n");
	// printf("prefix_count : %d\n", (int)prefix_count(dna));
	ft_memcpy(*str + prefix_count(dna), tmp, ft_strlen(tmp));
	// printf("test == %s\n", str+1);
	ft_memcpy(*str, prefix(dna), prefix_count(dna));
	free(tmp);
	return (*str);
}
