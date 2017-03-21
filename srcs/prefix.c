/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:50:34 by lchety            #+#    #+#             */
/*   Updated: 2017/03/17 16:37:28 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prefix_lossless(t_print *dna)
{
	char	*tmp;
	int		size;

	tmp = dna->out;
	size = ft_strlen(dna->out) + prefix_count(dna);
	if (!(dna->out = ft_strnew(size)))
		exit(EXIT_FAILURE);
	ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	ft_memcpy(dna->out + prefix_count(dna), tmp, ft_strlen(tmp));
	free(tmp);
}

int		prefix_lossy(t_print *dna)
{
	char	*tmp;
	int		size;

	ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	return (1);
}

char	*get_prefix(t_print *dna)
{
	if ((dna->conv_x || dna->conv_lx || dna->conv_p) && dna->htag)
		return ("0x");
	if (dna->conv_b)
		return ("0b");
	if (dna->conv_o || dna->conv_lo)
		return ("0");
	if (dna->pre_pls && !dna->pre_min)
		return ("+");
	if (dna->pre_min)
		return ("-");
	return ("\0");
}

size_t	prefix_count(t_print *dna)
{
	if (dna->htag && (dna->conv_x || dna->conv_lx || dna->conv_p))
		return (2);
	if (dna->htag && dna->conv_b)
		return (ft_strlen(get_prefix(dna)));
	if (dna->htag && dna->conv_o)
		return (1);
	if (dna->htag && dna->conv_lo)
		return (1);
	if (dna->pre_min)
		return (1);
	if (dna->pre_pls)
		return (1);
	return (0);
}
