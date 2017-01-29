/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:10:13 by lchety            #+#    #+#             */
/*   Updated: 2017/01/29 17:30:32 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


wchar_t utf8_enc(wchar_t c)
{
	int tmp;
	wchar_t ret;

	tmp = 0;
	ret = 0;

	if (c <  0x7f)
	{
		ft_putchar(c);
		return (0);
	}

	if (c < 0x800)
	{

		ft_putchar((c >> 6) | 0xC0);
		ft_putchar((c & 0x3f) | 0x80);
		// tmp = (c >> 6) | 0xC0;
		// write (1, &tmp, 1);
		// tmp = (c & 0x3f) | 0x80;
		// write (1, &tmp, 1);
		return (0);
	}

	if (c < 0x10000)
	{
		tmp = (c >> 12) | 0xE0;
		write (1, &tmp, 1);
		tmp = ((c >> 6) & 0x3f) | 0x80;
		write (1, &tmp, 1);
		tmp = (c & 0x3f) | 0x80;
		write (1, &tmp, 1);
		return (0);
	}

	if (c < 0x200000)
	{
		tmp = (c >> 18) | 0xF0;
		write (1, &tmp, 1);
		tmp = ((c >> 12) & 0x3f) | 0x80;
		write (1, &tmp, 1);
		tmp = ((c >> 6) & 0x3f) | 0x80;
		write (1, &tmp, 1);
		tmp = (c & 0x3f) | 0x80;
		write (1, &tmp, 1);
		return (0);
	}


	return (5);
}


//
/*
mask1;
mask2;
*/
