/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:12:02 by lchety            #+#    #+#             */
/*   Updated: 2017/03/14 11:26:08 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*do_width_with_pitch(t_print *dna)
{
	char	*tmp;
	int		size;

	tmp = dna->out;
	size = ft_strlen(dna->out);
	dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
	if (!dna->out)
		return (NULL);
	ft_memset(dna->out, ' ', dna->width);
	if (dna->justify)
		ft_memcpy(dna->out, tmp, size);
	else
		ft_memcpy(dna->out + (dna->width - size), tmp, size);
	free(tmp);
	return (dna->out);
}

char	*do_width_without_pitch(t_print *dna)
{
	char	*tmp;
	char	c;
	int		start;
	int		size;
	size = dna->width - (dna->base_size + prefix_count(dna));
	tmp = dna->out;
	c = (dna->flag_0) ? '0' : ' ';
	start = (dna->justify) ? 0 : size;
	//start = (dna->htag) ? prefix_count(dna) : size;
	//start = (dna->flag_0) ? start + 1 : start;
	//start = dna->out;
	dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
	if (!dna->out)
		return (NULL);
	ft_memset(dna->out, c, dna->width);
	ft_memcpy(dna->out + start, tmp, ft_strlen(tmp));

	return (dna->out);
}

char	*width_ectoplasme(t_print *dna, bool prefix_in)
{
	char	*tmp;
	char	c;
	int		pos;

	tmp = dna->out;
	c = (dna->flag_0) ? '0' : ' ';
	pos = (prefix_in) ? 0 : prefix_count(dna);
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1))))
		return (NULL);
	ft_memset(dna->out, c, dna->width);
	if (dna->justify)
		ft_memcpy(dna->out + pos, tmp, ft_strlen(tmp));
	else
		ft_memcpy(dna->out + (dna->width - ft_strlen(tmp)), tmp,	ft_strlen(tmp));
	free(tmp);

	return (dna->out);
}

void	width_ls(t_print *dna)
{
	char	*tmp;
	int		size;
	int		i;
	wchar_t	*start;

	i = 0;
	size = dna->width - count_unicode((wchar_t*)dna->out);
	size += ft_wstrlen((wchar_t*)dna->out);
	tmp = dna->out;
	if(!(dna->out = (char*)ft_memalloc(sizeof(wchar_t) * (size + 1))))
		exit (EXIT_FAILURE);
	while (i < size)
	{
		if (dna->flag_0)
			*(((wchar_t*)dna->out) + i) = L'0';
		else
			*(((wchar_t*)dna->out) + i) = L' ';
		i++;
	}
	start = (wchar_t*)dna->out;
	start += ft_wstrlen((wchar_t*)dna->out) - ft_wstrlen((wchar_t*)tmp);
	size = sizeof(wchar_t) * ft_wstrlen((wchar_t*)tmp);
	if (dna->justify)
		ft_memcpy(dna->out, tmp, size);
	else
		ft_memcpy((char*)start, tmp, size);
	free(tmp);
}
