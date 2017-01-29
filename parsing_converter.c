/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_converter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:37:44 by lchety            #+#    #+#             */
/*   Updated: 2017/01/29 15:51:11 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static void conv_switch(char c, t_print *conv_info)
{
	conv_info->conv = TRUE;
	if (c == 'd')
		conv_info->conv_d = TRUE;
	if (c == 'i')
		conv_info->conv_i = TRUE;
	if (c == 'c')
		conv_info->conv_c = TRUE;
	if (c == 'C')
		conv_info->conv_lc = TRUE;
	if (c == 's')
		conv_info->conv_s = TRUE;
	if (c == 'x')
		conv_info->conv_x = TRUE;
}

char	*parsing_converter(const char *format, t_print *conv_info)
{
	char *ret;

	ret = NULL;
	while (*format)
	{
		if (*format != '%')
		{
			if ((ret = ft_strchr(STRING_CONV, *format)))
			{
				conv_switch(*ret, conv_info);
				return ((char *)format + 1);
			}
			format++;
		}
		else
			return ((char *)format);
	}
	//printf(":-)\n");
	return (NULL);
}
