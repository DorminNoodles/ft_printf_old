/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 23:47:35 by lchety            #+#    #+#             */
/*   Updated: 2017/02/01 01:17:03 by lchety           ###   ########.fr       */
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

void	compute_conv_ls (t_print *conv_info, va_list ap)
{
	wchar_t	*tmp;
	// wchar_t *test;
	int i;

	i = 0;
	//printf("conv_ls\n");

	tmp = va_arg(ap, wchar_t*);
	// int bfoo = (int)ft_wstrlen(tmp);

	// printf("strlen = %d\n", (int)bfoo);
	if (conv_info->width > (int)ft_wstrlen(tmp))
	{
		conv_info->out = (char *)malloc(sizeof(wchar_t) * conv_info->width);
		printf("=>  %d   \n", conv_info->width - (int)ft_wstrlen(tmp));
		ft_memcpy(conv_info->out + (sizeof(wchar_t) * (conv_info->width - (int)ft_wstrlen(tmp))), tmp, sizeof(wchar_t) * (ft_wstrlen(tmp) + 1));
	}
	else
	{
		conv_info->out = (char *)malloc(sizeof(wchar_t) * (int)ft_wstrlen(tmp));
		ft_memcpy(conv_info->out, tmp, sizeof(wchar_t) * (int)ft_wstrlen(tmp) + 1);
	}



	// printf("\n\n");
	// ft_putwchar(*(wchar_t *)conv_info->out);
	// printf("\n\n");

	while (tmp[i] != '\0')
		ft_putwchar(*(((wchar_t *)conv_info->out) + i++));
		// ft_putwchar(tmp[i++]);
	conv_info = NULL;
	ap = 0;
}

void compute_conv_p(va_list ap)
{
	// address limit is 8 bytes for 64 bits so 0xFFFF FFFF FFFF FFFF 16 is max
	unsigned long a;
	void *tmp;

	a = 0;
	tmp = va_arg(ap, void *);

	a = (unsigned long)(tmp - a);

	printf("%lx\n", a);
	//ft_putstr("conv_p\n");


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
	if (conv_info->conv_ls)
		compute_conv_ls(conv_info, ap);
	if (conv_info->conv_p)
		compute_conv_p(ap);
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
