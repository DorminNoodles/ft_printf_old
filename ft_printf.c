/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:48:05 by lchety            #+#    #+#             */
/*   Updated: 2017/02/05 15:12:28 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int i;
	t_print conv_info;
	va_list ap;
	int ret;

	ret = 0;
	i = 0;
	va_start(ap, format);
	while ((ret = parsing_format(format, &conv_info)))
	{
		// printf("conv_d = %d\n", conv_info.conv_d);
		// printf("conv_x = %d\n", conv_info.conv_x);
		// printf("cast_h = %d\n", conv_info.cast_h);
		// printf("cast_hh = %d\n", conv_info.cast_hh);
		format += ret;
		if (conv_info.conv)
			compute_conv(&conv_info, ap);
		reset_print(&conv_info);
		//#pragma message(": warning<put what you like here>: blah blah blah")
	}
	//compute_conv(parsing_struct);
	return (0);
}
