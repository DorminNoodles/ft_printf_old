/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:12:02 by lchety            #+#    #+#             */
/*   Updated: 2017/03/17 16:06:43 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*do_width_with_pitch(t_print *dna)
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

char			*do_width_without_pitch(t_print *dna)
{
	char	*tmp;
	char	c;
	int		start;
	int		size;

	size = dna->width - (dna->base_size + prefix_count(dna));
	tmp = dna->out;
	c = (dna->flag_0) ? '0' : ' ';
	start = (dna->justify) ? 0 : size;
	dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
	if (!dna->out)
		return (NULL);
	ft_memset(dna->out, c, dna->width);
	ft_memcpy(dna->out + start, tmp, ft_strlen(tmp));
	return (dna->out);
}

char			*width_ectoplasme(t_print *dna, t_bool prefix_in)
{
	char	*tmp;
	char	c;
	int		pos;
	int		s;

	tmp = dna->out;
	s = ft_strlen(tmp);
	c = (dna->flag_0) ? '0' : ' ';
	pos = (prefix_in) ? 0 : prefix_count(dna);
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1))))
		return (NULL);
	ft_memset(dna->out, c, dna->width);
	if (dna->justify)
		ft_memcpy(dna->out + pos, tmp, ft_strlen(tmp));
	else
		ft_memcpy(dna->out + (dna->width - s), tmp, s);
	free(tmp);
	return (dna->out);
}

static void		wcharset(t_print *dna, wchar_t c, size_t sze)
{
	int i;

	i = 0;
	while (i < sze)
	{
		*(((wchar_t*)dna->out) + i) = c;
		i++;
	}
}

void			width_ls(t_print *dna)
{
	char	*tmp;
	int		size;
	int		i;
	wchar_t	*start;

	i = 0;
	size = dna->width - count_unicode((wchar_t*)dna->out);
	size += ft_wstrlen((wchar_t*)dna->out);
	tmp = dna->out;
	if (!(dna->out = (char*)ft_memalloc(sizeof(wchar_t) * (size + 1))))
		exit(EXIT_FAILURE);
	(dna->flag_0) ? wcharset(dna, L'0', size) : wcharset(dna, L' ', size);
	start = (wchar_t*)dna->out;
	start += ft_wstrlen((wchar_t*)dna->out) - ft_wstrlen((wchar_t*)tmp);
	size = sizeof(wchar_t) * ft_wstrlen((wchar_t*)tmp);
	if (dna->justify)
		ft_memcpy(dna->out, tmp, size);
	else
		ft_memcpy((char*)start, tmp, size);
	free(tmp);
}
