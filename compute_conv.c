/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:19:38 by lchety            #+#    #+#             */
/*   Updated: 2017/02/02 23:23:48 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	compute_conv_ld(t_print *conv_info, va_list ap)
{
	int nb;
	intmax_t ret;

	ret = 0;
	nb = 0;
	ret = exec_cast_signed(conv_info, ap);
	printf("ret == %ld\n", ret);
	conv_info->out = ft_itoa_signed(ret);
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

void	compute_conv_ls (t_print *conv_info, va_list ap)
{
	wchar_t	*tmp;
	// wchar_t *test;
	int i;

	i = 0;
	//printf("conv_ls\n");

	tmp = va_arg(ap, wchar_t*);

	if (conv_info->width > (int)count_unicode(tmp))
	{
		//printf("Here\n");
		conv_info->out = (char *)ft_memalloc(sizeof(wchar_t) * conv_info->width);
		while (i < conv_info->width)
		{
			*(((wchar_t *)conv_info->out) + i++) = L' ';
		}
		ft_memcpy(((wchar_t *)conv_info->out) + (conv_info->width - count_unicode(tmp)), tmp, (int)count_unicode(tmp) * sizeof(wchar_t));
	}
	else
	{
		//printf("width little\n");
		conv_info->out = (char *)malloc(sizeof(wchar_t) * (int)count_unicode(tmp));
		ft_memcpy(conv_info->out, tmp, sizeof(wchar_t) * (int)count_unicode(tmp) + 1);
	}

	// ft_putwchar(*(wchar_t *)conv_info->out);
	// printf("\n\n");
	i = 0;
	while (*(((wchar_t *)conv_info->out) + i) != '\0')
	{
		//printf("+");
		ft_putwchar(*(((wchar_t *)conv_info->out) + i));
		//ft_putstr("\n");
		i++;
		// ft_putwchar(tmp[i++]);
	}
	free(conv_info->out);
	conv_info->out = NULL;
}

void compute_conv_p(t_print *conv_info, va_list ap)
{
	// address limit is 8 bytes for 64 bits so 0xFFFF FFFF FFFF FFFF 16 is max
	unsigned long a;
	void *tmp;

	a = 0;
	tmp = va_arg(ap, void *);

	a = (unsigned long)tmp;
	conv_info->out = ft_itoa_printf(a, 16);
	if(!conv_info->out)
		return;
	// tmp =
	ft_putstr("0x");
	ft_putstr(conv_info->out);

	//ft_putstr("conv_p\n");
	free(conv_info->out);
}

void	conv_switch(t_print *conv_info, va_list ap)
{
	if (conv_info->conv_d)
		compute_conv_d(conv_info, ap);
	if (conv_info->conv_ld)
		compute_conv_ld(conv_info, ap);
	if (conv_info->conv_s)
		compute_conv_s(conv_info, ap);
	if (conv_info->conv_x)
		compute_conv_x(conv_info, 16, ap);
	if (conv_info->conv_lc)
		compute_conv_lc(ap);
	if (conv_info->conv_ls)
		compute_conv_ls(conv_info, ap);
	if (conv_info->conv_p)
		compute_conv_p(conv_info, ap);
}

void	compute_htag(t_print *conv_info)
{
	printf("htag = %d\n", (int)count_unicode((wchar_t *)conv_info->out));
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
