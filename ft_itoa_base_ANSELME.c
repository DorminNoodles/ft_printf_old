/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_ANSELME.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 14:33:15 by lchety            #+#    #+#             */
/*   Updated: 2017/01/20 19:10:55 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

static char		*reverse(char *tab)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = ft_strlen(tab) - 1;
	while(i < j)
	{
		tmp = tab[j];
		tab[j] = tab[i];
		tab[i] = tmp;
		i++;
		j--;
	}
	return (tab);
}

char	*zero(void)
{
	char *str;

	str = (char*)ft_memalloc(sizeof(char) * 2);
	str[0] = '0';
	return (str);
}
/*
char	*ft_itoa_signed(t_print *conv_info, int ret, int base)
{

	return ("0000");
}
*/
char	*ft_itoa_signed(long long n)
{
	char *str;
	int i;
	bool sign;
	unsigned long long nb;

	str = NULL;
	i = 0;
	sign = (n < 0) ? 1 : 0;
	nb = (sign) ? n * -1 : n;

	if (nb)
	{
		str = (char*)ft_memalloc(sizeof(char) * 50);
		while (nb > 0)
		{
			if (nb % base > 9)
				str[i] = ('a' - 10) + (nb % base);
			else
				str[i] = '0' + (nb % base);
			nb = nb / base;
			i++;
		}
		if (sign)
			str[i] = '-';
	}
	else
		return (zero());
	return (reverse(str));
}

char	*ft_itoa_printf(t_print *conv_info, int n, int base)
{

	char *str;
	if (conv_info->conv_d || conv_info->conv_i)
		return (ft_itoa_signed(n));
	else
		return (ft_itoa_base(n, base));
}

char	*ft_itoa_base(unsigned long long n, int base)
{
	char *str;
	int i;

	str = NULL;
	i = 0;
	if (n)
	{
		str = (char*)ft_memalloc(sizeof(char) * 50);
		while (n > 0)
		{
			if (n % base > 9)
				str[i] = ('a' - 10) + (n % base);
			else
				str[i] = '0' + (n % base);
			n = n / base;
			i++;
		}
	}
	else
		return (zero());
	return (reverse(str));
}


/*
	222
	222%10 = 2 =>
	222/10 = 22
	22%10 = 2 =>
	22/10 = 2
	2%10 = 2 =>
	2/10 = 0

	220
	220%10 = 0 =>
	220/10 = 22
	22%10 = 2 =>
	22/10 = 2
	2%10 = 2 =>
	2/10 = 0

*/

// char	*ft_itoa_base(intmax_t n, int base)
// {
// 	char *tab;
// 	int i;
// 	bool neg;
//
// 	neg = FALSE;
// 	i = 0;
// 	tab = (char *)ft_memalloc(sizeof(char) * 33);
// 	if (n < 0)
// 	{
// 		neg = TRUE;
// 		n = n * -1;
// 	}
// 	while (n >= 1)
// 	{
// 		if (n % base < 10)
// 			tab[i] = '0' + (n % base);
// 		else
// 			tab[i] = ('a' - 10) + (n % base);
// 		n = n / base;
// 		i++;
// 	}
// 	if (neg)
// 	{
// 		tab[i] = '-';
// 		tab[i + 1] = '\0';
// 	}
// 	else
// 		tab[i] = '\0';
// 	reverse(tab);
// 	return (tab);
// }

//10000000000000000000000000000000 = 32
