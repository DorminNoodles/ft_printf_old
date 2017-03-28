/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pitch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 09:38:43 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 18:45:03 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	compute_pitch_nb(t_print *dna)
{
	char	*tmp;
	int		pos;

	tmp = dna->out;
	pos = dna->pitch_nb - ft_strlen(dna->out);
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1))))
		exit(EXIT_FAILURE);
	ft_memset(dna->out, '0', dna->pitch_nb);
	ft_memcpy(dna->out + pos, tmp, ft_strlen(tmp));
	free(tmp);
}

void	compute_pitch_nb_cut(t_print *dna)
{
	char	*tmp;

	tmp = dna->out;
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1))))
		exit(EXIT_FAILURE);
	ft_strncpy(dna->out, tmp, dna->pitch_nb);
	free(tmp);
}

char	*do_pitch(t_print *dna, t_bool cut)
{
	if (dna->pitch_nb)
	{
		if (cut)
			compute_pitch_nb_cut(dna);
		else
			compute_pitch_nb(dna);
	}
	return (dna->out);
}

void	pitch_ls(t_print *dna)
{
	int		size;
	int		i;
	int		nbmax;
	char	*tmp;

	i = 0;
	size = 0;
	nbmax = 0;
	while (size + ft_wcharlen(*(((wchar_t*)dna->out) + nbmax)) <= dna->pitch_nb)
	{
		size += ft_wcharlen(*(((wchar_t*)dna->out) + nbmax));
		nbmax++;
	}
	tmp = dna->out;
	if (!(dna->out = (char*)ft_memalloc(sizeof(wchar_t) * (nbmax + 1))))
		exit(EXIT_FAILURE);
	i = 0;
	ft_memcpy(dna->out, tmp, sizeof(wchar_t) * nbmax);
	free(tmp);
}
