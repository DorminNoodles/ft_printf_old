/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:48:05 by lchety            #+#    #+#             */
/*   Updated: 2017/02/25 18:52:14 by lchety           ###   ########.fr       */
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
	reset_print(&dna);
	va_start(ap, format);
	while ((ret = parsing_format(format, &dna, ap)))
	{
		// printf("Hello : %d\n", ret);
		format += ret;
		if (dna.conv)
		{
			// printf("dna conv\n");
			compute_conv(&dna, ap);
		}
		reset_print(&dna);

		printf("TEST %s\n", dna.out);
		//free(dna.out);

		//#pragma message(": warning<put what you like here>: blah blah blah")
	}
	//compute_conv(parsing_struct);
	return ((int)dna.ret_nb);
}
