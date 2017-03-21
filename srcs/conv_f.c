/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 17:10:55 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 18:42:43 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		find_exponent(double nb)
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

void			conv_f(t_print *dna, va_list ap)
{
	double		nb;
	int			i;
	char		buff[256];
	int			expo;
	int			j;

	expo = 0;
	j = 0;
	i = 0;
	ft_bzero(buff, 255);
	nb = va_arg(ap, double);
}
