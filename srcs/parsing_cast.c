/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_cast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 18:35:56 by lchety            #+#    #+#             */
/*   Updated: 2017/03/17 16:19:21 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parsing_h_hh(const char *format, t_print *dna, char *end)
{
	int nbh;

	nbh = 0;
	while (format < end)
	{
		if (*format == 'h')
			nbh++;
		format++;
	}
	if (nbh)
	{
		if (nbh % 2 == 1)
			dna->cast_h = TRUE;
		else
			dna->cast_hh = TRUE;
	}
}

void	parsing_l_ll(const char *format, t_print *dna, char *end)
{
	int nbl;

	nbl = 0;
	while (format < end)
	{
		if (*format == 'l')
			nbl++;
		format++;
	}
	if (nbl)
	{
		if (nbl % 2 == 1)
			dna->cast_l = TRUE;
		else
			dna->cast_ll = TRUE;
	}
}

void	parsing_z(const char *format, t_print *dna, char *end)
{
	while (format < end)
	{
		if (*format == 'z')
			dna->cast_z = TRUE;
		format++;
	}
}

void	parsing_j(const char *format, t_print *dna, char *end)
{
	while (format < end)
	{
		if (*format == 'j')
			dna->cast_j = TRUE;
		format++;
	}
}

void	parsing_cast(const char *format, t_print *dna, char *end)
{
	parsing_h_hh(format, dna, end);
	parsing_l_ll(format, dna, end);
	parsing_z(format, dna, end);
	parsing_j(format, dna, end);
}
