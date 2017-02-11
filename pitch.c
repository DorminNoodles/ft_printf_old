/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pitch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 09:38:43 by lchety            #+#    #+#             */
/*   Updated: 2017/02/11 14:15:33 by lchety           ###   ########.fr       */
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
	// int size;
	//
	// size = 0;
	printf("COMPUTE_PITCH_DOLLAR\n");

	//dna->pitch_nb = va_arg(ap, int);
	printf("%s\n", dna->out);

}

void	compute_pitch_star(t_print *dna, va_list ap, bool cut)
{



	//printf("%s\n", dna->out);

	/* hum.... je dois recuperer le premier arg pour ma pitch_size mais apres je dois refaire casting.... du deuxieme

	Alors autant prendre le second la premiere fois et le premier ici...

	je sais que je peux clone la list...

	bon je reprend out en ft_atoi to => pitch_nb

	ensuite je cast le deuxieme dans cast

	sinon je clone AP au tout debut et travail sur des copies, des clones et
	si je trouve un * dans l une je l utilise comme pitch_size



	*/

}

void	compute_pitch(t_print *dna, va_list ap, bool cut)
{
	// printf("compute_pitch\n");
	if (dna->pitch_nb)
		compute_pitch_nb(dna, cut);
	else if (dna->pitch_dollar)
		compute_pitch_dollar(dna);
	else if (dna->pitch_star)
		compute_pitch_star(dna, ap, cut);
}
