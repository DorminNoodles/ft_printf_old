/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 17:10:55 by lchety            #+#    #+#             */
/*   Updated: 2017/03/15 18:21:25 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_exponent(double nb)
{
	int i;

	i = 1;
	while ((int)nb > 9)
	{
		nb = nb / 10;
		i++;
	}

	return (i);
}

void	conv_f(t_print *dna, va_list ap)
{
	printf("conv_f\n");

	double nb;
	int i;
	char buff[256];
	int expo;
	int j;

	expo = 0;
	j = 0;
	i = 0;
	ft_bzero(buff,255);
	nb = va_arg(ap, double);
	expo = find_exponent(nb);

	printf("first : %f\n", nb);
	//
	// while (nb > 9.0)
	// 	nb = nb / 10.0;

	nb = nb - nb;

	printf("%f\n", (int)nb);




	// printf("after reduc %f\n", nb);
	//
	// while (i < 3)
	// {
	// 	buff[i] = 48.0 + nb;
	// 	printf("nocast : %f\n", nb);
	// 	//printf("cast : %d\n", (int)nb);
	// 	printf("buff = %d\n", buff[i]);
	// 	nb -= (int)nb;
	// 	nb = nb * 10.0000;
	// 	printf("true : %f\n", nb);
	// 	i++;
	// }
	// printf("%.8f\n", 1.42);
	// printf("%s\n", buff);
	//
	// int length = expo + 6 + 1;
	//
	// if(!(dna->out = (char*)ft_memalloc(sizeof(char) * length + 1)))
	// 	exit(EXIT_FAILURE);
	//
	// i = 0;
	//
	// while (i < expo)
	// {
	// 	dna->out[i] = buff[i];
	// 	i++;
	// }
	//
	// dna->out[i] = '.';
	// i++;
	//
	// while (i < expo + 6)
	// {
	// 	dna->out[i] = buff[i-1];
	// 	i++;
	// }
	//
	// printf("%s\n", dna->out);
	//





}
