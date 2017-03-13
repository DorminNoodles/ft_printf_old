/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_pitch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:15:17 by lchety            #+#    #+#             */
/*   Updated: 2017/03/13 14:21:15 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parsing_pitch(const char *fmt, t_print *dna, char *end, va_list ap)
{
	int i;

	while(fmt < end)
	{
		i = 1;
		if(*fmt == '.')
		{
			dna->pitch = TRUE;
			dna->pitch_nb = 0;
			while (*(fmt + i) >= '0' && *(fmt + i) <= '9')
			{
				dna->pitch_nb = dna->pitch_nb * 10;
				dna->pitch_nb += *(fmt + i) - '0';
				i++;
			}
		}
		fmt++;
	}
}
