/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pitch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 09:38:43 by lchety            #+#    #+#             */
/*   Updated: 2017/02/20 14:33:08 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//pourquoi ne pas tjrs mettre le prefix dans le pitch si il existe

// prefix ne fait pas partie du pitch mais prefix fait partie de width
//donc je dois faire
//1. le pitch sans le prefix
//2. ajouter le prefix
//3. faire le width mis si on  pas fait de pitch je dois mette le prefix apres...
//4.refaire prefix maybe

//j ajoute le prefix dans pitch si pitch il y a eu... en fait si pitch il
//y a meme si pitch est plus petit que base_size....

char	*compute_pitch_nb(t_print *dna)
{
	char	*tmp;
	int		pos;

	//printf("compute_pitch_nb\n");
	tmp = dna->out;
	pos = dna->pitch_nb - ft_strlen(dna->out);
	if(!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1))))
		return (NULL);
	ft_memset(dna->out, '0', dna->pitch_nb);
	ft_memcpy(dna->out + pos, tmp, ft_strlen(tmp));
	free(tmp);
	return (dna->out);
}

char	*compute_pitch_nb_cut(t_print *dna)
{
	char	*tmp;
	int		pos;

	//printf("compute_pitch_nb_cut\n");
	printf("2 out => %s\n", dna->out);
	tmp = dna->out;
	pos = dna->pitch_nb - ft_strlen(dna->out);
	if(!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1))))
		return (NULL);
	ft_memcpy(dna->out + pos, tmp, ft_strlen(tmp));
	// printf("out => %s\n", dna->out);
	free(tmp);
	return (dna->out);
}

/*
char	*compute_pitch_nb(t_print *dna)
{
	char *tmp;
	int size_malloc;
	int start;

	printf("compute_pitch_nb\n");
	start = 0;
	size_malloc = dna->pitch_nb + 1;
	tmp = dna->out;
	dna->out = (char*)ft_memalloc(sizeof(char) * size_malloc);
	if (!dna->out)
		return (NULL);
	ft_memset(dna->out, '0', dna->pitch_nb + prefix_count(dna));
	start = (dna->pitch_nb - dna->base_size) + prefix_count(dna);
	ft_memcpy(dna->out + start, tmp, dna->base_size);
	ft_memcpy(dna->out, get_prefix(dna), prefix_count(dna));
	free(tmp);
	return (dna->out);
}
*/

void	compute_pitch_dollar(t_print *dna)
{
	// int size;
	//
	// size = 0;
	printf("COMPUTE_PITCH_DOLLAR\n");

	//dna->pitch_nb = va_arg(ap, int);
	//printf("%s\n", dna->out);

}

void	compute_pitch_star(t_print *dna)
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

char	*do_pitch(t_print *dna, bool cut)
{
	//ft_putstr("fuck\n");
	// printf("do_pitch\n");
	if (dna->pitch_nb)
	{
		if(cut)
			dna->out = compute_pitch_nb_cut(dna);
		else
			dna->out = compute_pitch_nb(dna);
	}
	else if (dna->pitch_dollar)
		compute_pitch_dollar(dna);
	else if (dna->pitch_star)
		compute_pitch_star(dna);

	return (dna->out);
}
