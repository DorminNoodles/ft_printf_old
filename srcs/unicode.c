/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:10:13 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 16:47:58 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_wcharlen(wchar_t c)
{
	if (c < 0x7f)
		return (1);
	else if (c < 0x800)
		return (2);
	else if (c < 0x10000)
		return (3);
	else
		return (4);
}

size_t		count_unicode(wchar_t *str)
{
	size_t	size;
	int		i;

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
