/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pitch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 09:38:43 by lchety            #+#    #+#             */
/*   Updated: 2017/02/09 22:07:10 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	compute_pitch_nb(t_print *dna, bool cut)
{
	char *tmp;

	if (dna->base_size < dna->pitch_nb || cut)
	{
		tmp = dna->out;
		dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1));
		ft_memset(dna->out, '0', dna->pitch_nb);
		if (dna->conv_s)
			ft_memcpy(dna->out, tmp, dna->pitch_nb);
		else
			ft_memcpy(dna->out + (dna->pitch_nb - dna->base_size), tmp, dna->base_size);
		free(tmp);
	}
}

void	compute_pitch_dollar(t_print *dna)
{
	printf("COMPUTE_PITCH_DOLLAR\n");
	printf("%s\n", dna->out);

}

void	compute_pitch_star(t_print *dna)
{
	printf("COMPUTE_PITCH_STAR\n");
	printf("%s\n", dna->out);

}

void	compute_pitch(t_print *dna, bool cut)
{
	if (dna->pitch_nb)
		compute_pitch_nb(dna, cut);
	else if (dna->pitch_dollar)
		compute_pitch_dollar(dna);
	else if (dna->pitch_star)
		compute_pitch_star(dna);
}
