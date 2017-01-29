/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:05:18 by lchety            #+#    #+#             */
/*   Updated: 2017/01/29 17:40:21 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


void	compute_conv_d(t_print *conv_info, va_list ap)
{
	int nb;
	intmax_t ret;

	ret = 0;
	nb = 0;
	ret = exec_cast_signed(conv_info, ap);
	conv_info->out = ft_itoa(ret);
	// conv_info->out = ft_itoa_printf(ret, base);
	conv_info->base_size = ft_strlen(conv_info->out);
	compute_width(conv_info);
	if (conv_info->htag && conv_info->conv_x)
		compute_htag(conv_info);
	ft_putstr(conv_info->out);
	free(conv_info->out);
}

void	compute_conv_x(t_print *conv_info, int base, va_list ap)
{
		int nb;
	intmax_t ret;
	//printf("HEXAAAAAAA !!!!\n");
	ret = 0;
	nb = 0;
	// printf("base %d\n", base);
	ret = exec_cast_unsigned(conv_info, ap);
	// printf("boat %d\n", ret);
	conv_info->out = ft_itoa_printf(ret, base);
	conv_info->base_size = ft_strlen(conv_info->out);
	compute_width(conv_info);
	if (conv_info->htag && conv_info->conv_x)
		compute_htag(conv_info);
	ft_putstr(conv_info->out);
	free(conv_info->out);
}

/*
void	compute_conv_d(t_print *conv_info, int base, va_list ap)
{
	char *str;
	int nb;
	int ret;

	ret = 0;
	nb = 0;

	ret = va_arg(ap, int);
	conv_info->out = ft_itoa_base(ret, base);
	conv_info->base_size = ft_strlen(conv_info->out);
	compute_width(conv_info, ap);
	compute_htag(conv_info);
	ft_putstr(conv_info->out);
	free(conv_info->out);
	//nb = get_ap(1);
}
*/

void	compute_conv_lc (va_list ap)
{
	//printf("CONV_LC\n");

	wchar_t raw;

	raw = va_arg(ap, wchar_t);
	//utf8_enc(raw);
	ft_putwchar(raw);


}

void	compute_conv_s (t_print *conv_info, va_list ap)
{
	char *str;
	char *tmp;
	int nb;
	int ret;

	ret = 0;
	nb = 0;
	str = NULL;

	//str = va_arg(ap, char*);
	tmp = va_arg(ap, char*);
	conv_info->out = ft_strnew(ft_strlen(tmp));
	if (!conv_info->out)
		return;
	conv_info->base_size = ft_strlen(tmp);
	ft_strcpy(conv_info->out, tmp);
	compute_width(conv_info);
	// printf("Bol = %d\n", conv_info->width);

	//printf("test %d\n", conv_info->base_size);

	ft_putstr(conv_info->out);
	free(conv_info->out);
}

void	conv_switch(t_print *conv_info, va_list ap)
{
	if (conv_info->conv_d)
		compute_conv_d(conv_info, ap);
	if (conv_info->conv_s)
		compute_conv_s(conv_info, ap);
	if (conv_info->conv_x)
		compute_conv_x(conv_info, 16, ap);
	if (conv_info->conv_lc)
		compute_conv_lc(ap);
}

void	compute_htag(t_print *conv_info)
{
	ft_memcpy(conv_info->out, "0x", 2);
}

/*
void	compute_htag(t_print *conv_info)
{
	char *tmp;

	//ft_putstr(conv_info->out);
	//ft_putchar('\n');
	if ()

	if (conv_info->base > conv_info->width)
	{

	}
*/


//}

void	compute_width(t_print *conv_info)
{
	char *tmp;
	int i;
	char c;

	i = 0;
	c = (conv_info->flag_0) ? '0' : ' ';
	//printf("compute_width\n");
	if (conv_info->width && conv_info->width > conv_info->base_size)
	{
		tmp = conv_info->out;
		conv_info->out = (char*)ft_memalloc(1 * (conv_info->width + 1));
		while (i < conv_info->width)
		{
			*(conv_info->out + i) = c;
			i++;
		}
		if (conv_info->justify)
			ft_memcpy(conv_info->out + 2, tmp, ft_strlen(tmp));
		else
			ft_strcpy(conv_info->out + (i - conv_info->base_size), tmp);
		free(tmp);
	}
}
/*
void	flag_switch(t_print *conv_info, const char *format, va_list ap)
{
	// if (conv_info->width)
	// 	compute_width(conv_info, format, ap);
}
*/

void	compute_conv(t_print *conv_info, va_list ap)
{
	conv_switch(conv_info, ap);
	//ft_putstr("Conv_START\n");
	//flag_switch(conv_info, format, ap);
	//exec_cast(conv_info, format, ap);
	//cast_switch(conv_info, format, ap);
}
