/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:48:05 by lchety            #+#    #+#             */
/*   Updated: 2017/03/17 17:25:47 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			convert(&dna, ap);
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
			convert(&dna, ap);
	}
	return ((int)dna.ret_nb);
}
