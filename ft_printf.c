/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:48:05 by lchety            #+#    #+#             */
/*   Updated: 2017/02/12 15:22:30 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int i;
	t_print dna;
	va_list ap;
	int ret;

	ret = 0;
	i = 0;
	dna.ret_nb = 0;
	va_start(ap, format);
	while ((ret = parsing_format(format, &dna, ap)))
	{
		format += ret;
		if (dna.conv)
			compute_conv(&dna, ap);
		reset_print(&dna);
		//#pragma message(": warning<put what you like here>: blah blah blah")
	}
	//compute_conv(parsing_struct);
	return ((int)dna.ret_nb);
}
