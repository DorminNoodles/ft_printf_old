/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:50:34 by lchety            #+#    #+#             */
/*   Updated: 2017/02/16 09:13:41 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*prefix_for_pitch(t_print *dna)
{
	char	*tmp;
	int		size;
	int		start;
	// printf("enter_prefix\n");
	size = dna->base_size + prefix_count(dna) + 1;
	tmp = dna->out;
	dna->out = (char*)ft_memalloc(sizeof(char) * size);
	if (!dna->out)
	return (NULL);
	ft_memcpy(dna->out + prefix_count(dna), tmp, dna->base_size);
	ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	return (dna->out);
}

static char		*prefix_for_width(t_print *dna)
{
	char	*tmp;

	// printf("bordel %s\n", dna->out);
	//ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	if (dna->flag_0)
		ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	else
		ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));

	return (dna->out);
}

char	*add_prefix(t_print *dna)
{
	char	*tmp;
	int		size;

	//printf("BOB\n");
	tmp = dna->out;
	size = (int)ft_strlen(dna->out) + prefix_count(dna);
	dna->out = (char*)ft_memalloc(sizeof(char) * (size + 1));
	if (!dna->out)
		return (NULL);
	ft_memcpy(dna->out + prefix_count(dna), tmp, ft_strlen(tmp));
	// printf("1 : %s\n", dna->out + 1);
	ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	// printf("2 : %s\n", dna->out);

	return (dna->out);
}

char	*prefix(t_print *dna)
{
	int size;
	// printf("HERE\n");
	size = 0;
	if (dna->pitch_nb)
		dna->out = prefix_for_pitch(dna);
	else if (dna->width)
		dna->out = prefix_for_width(dna);
	else
		prefix_for_pitch(dna);
		//printf("truffe\n");


	return(dna->out);
}

char	*get_prefix(t_print *dna)
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
