/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_cast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 18:35:56 by lchety            #+#    #+#             */
/*   Updated: 2017/02/07 15:50:03 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parsing_h_hh(const char *format, t_print *conv_info, char *end)
{
	int nbh;

	nbh = 0;
	while (format < end)
	{
		if (*format == 'h')
			nbh++;
		format++;
	}
	if (nbh)
	{
		// printf("### cast_h = %d\n", conv_info->cast_h);
		// printf("### cast_hh = %d\n", conv_info->cast_hh);
		// printf("print = %d\n", nbh);
		if (nbh % 2 == 1)
		{
			conv_info->cast_h = TRUE;
			// printf("H_____________\n");
		}
		else
			conv_info->cast_hh = TRUE;

			// printf("### cast_h = %d\n", conv_info->cast_h);
			// printf("### cast_hh = %d\n", conv_info->cast_hh);
	}
}

void	parsing_l_ll(const char *format, t_print *conv_info, char *end)
{
	int nbl;

	nbl = 0;
	while (format < end)
	{
		if (*format == 'l')
			nbl++;
		format++;
	}
	if (nbl)
	{
		// printf("### cast_h = %d\n", conv_info->cast_h);
		// printf("### cast_hh = %d\n", conv_info->cast_hh);
		// printf("print = %d\n", nbh);
		if (nbl % 2 == 1)
		{
			conv_info->cast_l = TRUE;
			// printf("H_____________\n");
		}
		else
			conv_info->cast_ll = TRUE;

			// printf("### cast_h = %d\n", conv_info->cast_h);
			// printf("### cast_hh = %d\n", conv_info->cast_hh);
	}
}

void	parsing_z(const char *format, t_print *conv_info, char *end)
{
	while (format < end)
	{
		if (*format == 'z')
			conv_info->cast_z = TRUE;
		format++;
	}
}

void	parsing_j(const char *format, t_print *conv_info, char *end)
{
	while (format < end)
	{
		if (*format == 'j')
			conv_info->cast_j = TRUE;
		format++;
	}
}

void	parsing_cast(const char *format, t_print *conv_info, char *end)
{
	parsing_h_hh(format, conv_info, end);
	parsing_l_ll(format, conv_info, end);
	parsing_z(format, conv_info, end);
	parsing_j(format, conv_info, end);
	// printf("test cast_h %d\n", conv_info->cast_h);
	// printf("test cast_hh %d\n", conv_info->cast_hh);

}
