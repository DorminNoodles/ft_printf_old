/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:18:25 by lchety            #+#    #+#             */
/*   Updated: 2017/03/06 14:30:40 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pustr_zero(char *str)
{
	int count;

	count = 1;
	while (count)
	{
		if (str == '\0')
		count--;
		if (count)
		{
			ft_putchar(*str);
			str++;
		}
	}
}
