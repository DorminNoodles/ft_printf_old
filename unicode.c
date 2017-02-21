/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:10:13 by lchety            #+#    #+#             */
/*   Updated: 2017/02/21 22:23:45 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>

size_t		wcharlen(wchar_t c)
{
	// printf("test = %C\n", c);
	if (c < 0x7f)
		return (1);
	else if (c < 0x800)
		return (2);
	else if (c < 0x10000)
		return (3);
	else
		return (4);
}

size_t		wstrlen(wchar_t *str)
{
	int ret;

	ret = 0;
	while (*str)
		ret += wcharlen(*str++);
	return (ret);
}

size_t	count_unicode(wchar_t *str)
{
	size_t size;
	int i;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0x7f)
			size++;
		else if (str[i] < 0x800)
			size += 2;
		else if (str[i] < 0x10000)
			size += 3;
		else
			size += 4;
		i++;
	}
	return (size);
}

//
// wchar_t utf8_enc(wchar_t c)
// {
// 	int tmp;
// 	wchar_t ret;
//
// 	tmp = 0;
// 	ret = 0;
//
// 	if (c <  0x7f)
// 	{
// 		ft_putchar(c);
// 		return (0);
// 	}
//
// 	if (c < 0x800)
// 	{
//
// 		ft_putchar((c >> 6) | 0xC0);
// 		ft_putchar((c & 0x3f) | 0x80);
// 		// tmp = (c >> 6) | 0xC0;
// 		// write (1, &tmp, 1);
// 		// tmp = (c & 0x3f) | 0x80;
// 		// write (1, &tmp, 1);
// 		return (0);
// 	}
//
// 	if (c < 0x10000)
// 	{
// 		tmp = (c >> 12) | 0xE0;
// 		write (1, &tmp, 1);
// 		tmp = ((c >> 6) & 0x3f) | 0x80;
// 		write (1, &tmp, 1);
// 		tmp = (c & 0x3f) | 0x80;
// 		write (1, &tmp, 1);
// 		return (0);
// 	}
//
// 	if (c < 0x200000)
// 	{
// 		tmp = (c >> 18) | 0xF0;
// 		write (1, &tmp, 1);
// 		tmp = ((c >> 12) & 0x3f) | 0x80;
// 		write (1, &tmp, 1);
// 		tmp = ((c >> 6) & 0x3f) | 0x80;
// 		write (1, &tmp, 1);
// 		tmp = (c & 0x3f) | 0x80;
// 		write (1, &tmp, 1);
// 		return (0);
// 	}
//
//
// 	return (5);
// }


//
/*
mask1;
mask2;
*/
