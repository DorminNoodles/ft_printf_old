/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:48:05 by lchety            #+#    #+#             */
/*   Updated: 2017/03/13 15:41:02 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	int			i;
	t_print		dna;
	va_list		ap;
	int			ret;

	ret = 0;
	i = 0;
	dna.ret_nb = 0;
	va_start(ap, format);
	while ((ret = parsing_format(format, &dna, ap)))
	{
		format += ret;
		if (dna.conv)
			compute_conv(&dna, ap);
	}
	return ((int)dna.ret_nb);
}

int		ft_dprintf(int fd, const char *format, ...)
{
	int			i;
	t_print		dna;
	va_list		ap;
	int			ret;

	ret = 0;
	i = 0;
	dna.ret_nb = 0;
	va_start(ap, format);
	while ((ret = parsing_format(format, &dna, ap)))
	{
		format += ret;
		if (dna.conv)
			compute_conv(&dna, ap);
	}
	return ((int)dna.ret_nb);
}
