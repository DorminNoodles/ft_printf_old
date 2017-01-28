/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 12:01:22 by lchety            #+#    #+#             */
/*   Updated: 2017/01/28 17:33:38 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_swapchar(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_strrev(char *str)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		ft_swapchar(str + i, str + j);
		i++;
		j--;
	}

}

char	*ft_itoa_printf(intmax_t n, int base)
{
	char *str;
	int i;

	i = 0;
	str = (char*)ft_memalloc(sizeof(char) * 300);
	if (n == 0)
		return (str[0] = '0', str);

	while (n > 0)
	{
		if (n % base > 9)
			str[i] = (n % base) + ('a' - 10);
		else
			str[i] = (n % base) + '0';
		n = n / base;
		i++;
	}
	ft_strrev(str);
	return (str);
}
