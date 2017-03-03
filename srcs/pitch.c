/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pitch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 09:38:43 by lchety            #+#    #+#             */
/*   Updated: 2017/03/02 12:17:10 by lchety           ###   ########.fr       */
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

void	compute_pitch_nb(t_print *dna)
{
	char	*tmp;
	int		pos;

	// printf("compute_pitch_nb\n");
	tmp = dna->out;
	pos = dna->pitch_nb - ft_strlen(dna->out);

	if(!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1))))
		exit(EXIT_FAILURE);
	ft_memset(dna->out, '0', dna->pitch_nb);
	ft_memcpy(dna->out + pos, tmp, ft_strlen(tmp));
	free(tmp);
}

void	compute_pitch_nb_cut(t_print *dna)
{
	char	*tmp;
	//int		pos;

	tmp = dna->out;
	//pos = dna->pitch_nb - ft_strlen(dna->out);
	if(!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1))))
		exit(EXIT_FAILURE);
	ft_strncpy(dna->out, tmp, dna->pitch_nb);
	free(tmp);
}

/*
char	*compute_pitch_nb(t_print *dna)
{
	char *tmp;
	int size_malloc;
	int start;

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

}

void	compute_pitch_star(t_print *dna)
{

	printf("PITCH_STAR\n");

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
	// printf("pitch_star == %d\n", dna->pitch_star);
	if (dna->pitch_nb)
	{
		// printf("pitch_star == %d\n", dna->pitch_star);
		// printf("pitch_nb == %d\n", dna->pitch_nb);
		if(cut)
			compute_pitch_nb_cut(dna);
		else
			compute_pitch_nb(dna);
	}
	// else if (dna->pitch_dollar)
	// 	compute_pitch_dollar(dna);
	// else if (dna->pitch_star)
	// 	compute_pitch_star(dna);

	return (dna->out);
}

void	pitch_ls(t_print *dna)
{
	int		size;
	int		i;
	int		nb_max;
	char	*tmp;

	i = 0;
	size = 0;
	nb_max = 0;
	while (size + wcharlen(*(((wchar_t*)dna->out) + nb_max)) <= dna->pitch_nb)
	{
		size += wcharlen(*(((wchar_t*)dna->out) + nb_max));
		nb_max++;
	}
	tmp = dna->out;
	if(!(dna->out = (char*)ft_memalloc(sizeof(wchar_t) * (nb_max + 1))))
		exit(EXIT_FAILURE);
	i = 0;
	ft_memcpy(dna->out, tmp, sizeof(wchar_t) * nb_max);
	// printf("size == %d\n", size);
	free(tmp);
}
