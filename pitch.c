/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pitch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 09:38:43 by lchety            #+#    #+#             */
/*   Updated: 2017/02/09 11:49:29 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	compute_pitch_nb(t_print *dna)
{
	char *tmp;

	printf("COMPUTE_PITCH_NB\n");
	//printf("%s\n", dna->out);
	tmp = dna->out;

	dna->out = (char*)ft_memalloc


	free(tmp);
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

void	compute_pitch(t_print *dna)
{
	if (dna->pitch_nb)
		compute_pitch_nb(dna);
	else if (dna->pitch_dollar)
		compute_pitch_dollar(dna);
	else if (dna->pitch_star)
		compute_pitch_star(dna);
}
