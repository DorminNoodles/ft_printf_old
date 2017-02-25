/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:50:34 by lchety            #+#    #+#             */
/*   Updated: 2017/02/25 17:53:15 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*prefix_lossless(t_print *dna)
{
	char	*tmp;
	int		size;
	printf("here 2\n");
	printf("prefix_lossless\n");
	tmp = dna->out;
	size = ft_strlen(dna->out) + prefix_count(dna) + 1;
	if(!(dna->out = (char*)ft_memalloc(sizeof(char) * size)))
		return (NULL);
	printf("TEST %p\n", dna->out);
	ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	ft_memcpy(dna->out + prefix_count(dna), tmp, ft_strlen(tmp));
	//free(tmp);
	//tmp = NULL;
	printf("TEST %p\n", dna->out);
	return (dna->out);
}

char	*prefix_lossy(t_print *dna)
{
	char	*tmp;
	int		size;

	//printf("enter_prefix\n");
	ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	return (dna->out);
}

static char		*prefix_for_pitch(t_print *dna)
{
	char	*tmp;
	int		size;
	int		start;
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
	ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));

	free(tmp);
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
	if ((dna->conv_x || dna->conv_lx || dna->conv_p) && dna->htag)
		return ("0x");
	if (dna->conv_b)
		return ("0b");
	if (dna->conv_o)
		return ("0");
	if (dna->pre_pls && !dna->pre_min)
	{
		// if (dna->width < dna->base_size)
		// {
		// 	dna->ret_nb++;
			return ("+");
		// }
	}
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
	if (dna->pre_min)
		return (1);
	if (dna->pre_pls)
		return (1);
	return (0);
}
