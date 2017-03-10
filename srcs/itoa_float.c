/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_float.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 20:45:26 by lchety            #+#    #+#             */
/*   Updated: 2017/03/10 22:03:46 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	itoa_float(double x)
{
	//buffer de 100 toujours garder le nombre d entree dans le buffer
	//et si on vient a le depasser on remalloc plus grand

	// if (x != 0.0)
	// 	printf("x not 0\n");

	while (x != 0.0)
	{
		printf("%d", (int)x);
		x = x - (int)x;
		x *= 10;
	}
}
