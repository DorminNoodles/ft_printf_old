/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:09:10 by lchety            #+#    #+#             */
/*   Updated: 2017/02/23 12:25:16 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*compute_conv_s (t_print *dna, va_list ap)
{
	char *str;
	char *tmp;
	int nb;
	int ret;

	ret = 0;
	nb = 0;
	str = NULL;
	tmp = va_arg(ap, char*);
	dna->out = ft_strnew(ft_strlen(tmp));
	if (!dna->out)
		return (NULL);
	ft_strcpy(dna->out, tmp);
	dna->base_size = ft_strlen(tmp);
	dna->out = set_length_char(dna);

	dna->ret_nb += ft_strlen(dna->out);
		ft_putstr(dna->out);
	free(dna->out);
	return (dna->out);
}

void	compute_conv_ls (t_print *dna, va_list ap)
{
	wchar_t	*tmp;
	// wchar_t *test;
	int i;

	i = 0;
	tmp = va_arg(ap, wchar_t*);
	if (dna->width > (int)count_unicode(tmp))
	{
		dna->out = (char *)ft_memalloc(sizeof(wchar_t) * dna->width);
		while (i < dna->width)
			*(((wchar_t *)dna->out) + i++) = L' ';
		ft_memcpy(((wchar_t *)dna->out) + (dna->width - count_unicode(tmp)), tmp, (int)count_unicode(tmp) * sizeof(wchar_t));
	}
	else
	{
		dna->out = (char *)ft_memalloc(sizeof(wchar_t) * ((int)count_unicode(tmp) + 1));
		ft_memcpy(dna->out, tmp, sizeof(wchar_t) * ((int)count_unicode(tmp) + 1));
	}
	i = 0;
	while (*(((wchar_t *)dna->out) + i) != '\0')
	{
		ft_putwchar(*(((wchar_t *)dna->out) + i));
		i++;
	}
	dna->ret_nb += wstrlen ((wchar_t*)dna->out);
	free(dna->out);
	dna->out = NULL;
}

char	*compute_conv_p(t_print *dna, va_list ap)
{
	// address limit is 8 bytes for 64 bits so 0xFFFF FFFF FFFF FFFF 16 is max
	unsigned long a;
	void *tmp;

	a = 0;
	tmp = va_arg(ap, void *);
	dna->htag = TRUE;
	a = (unsigned long)tmp;
	if(!(dna->out = ft_itoa_printf(a, 16)))
	return (NULL);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out) + 2;
	ft_putstr(dna->out);
	free(dna->out);
	return (dna->out);
}

void	compute_conv_d(t_print *dna, va_list ap)
{
	intmax_t nb;

	nb = exec_cast_signed(dna, ap);
	dna->pre_min = (nb < 0) ? TRUE : FALSE;
	nb = (nb < 0) ? nb * (-1) : nb;
	dna->out = ft_itoa_printf(nb, 10);
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	dna->out = flag_blk(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
}

void	compute_conv_ld(t_print *dna, va_list ap)
{
	int nb;
	intmax_t ret;

	ret = 0;
	nb = 0;

	ret = cast_ld(dna, ap);
	if (ret < 0)
	{
		ret = ret * (-1);
		dna->pre_min = TRUE;
	}
	dna->out = ft_itoa_signed(ret);
	dna->base_size = ft_strlen(dna->out);
	if (!dna->pitch)
		do_width(dna);
	else
		do_pitch(dna, FALSE);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(prefix(dna));
	ft_putstr_buff(dna->out);
	free(dna->out);
}

void 	compute_conv_o(t_print *dna, va_list ap)
{
	uintmax_t n;

	n = va_arg(ap, uintmax_t);
	dna->out = ft_itoa_printf((long)n, 8);
	dna->base_size = ft_strlen(dna->out);

	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
}

/*
void 	compute_conv_lo(t_print *dna, va_list ap)
{
	uintmax_t n;

	n = va_arg(ap, uintmax_t);
	dna->out = ft_itoa_printf((long)n, 8);
	dna->base_size = ft_strlen(dna->out);

	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
}
*/

void	compute_conv_x(t_print *dna, va_list ap)
{
	int nb;
	intmax_t ret;
	int		i;

	ret = 0;
	nb = 0;
	i = 0;
	ret = exec_cast_unsigned(dna, ap);
	if (ret == 0)
		dna->htag = FALSE;
	dna->out = ft_itoa_printf(ret, 16);
	if (ret == 0 && dna->pitch && !dna->pitch_nb)
		dna->out[0] = '\0';
	dna->base_size = ft_strlen(dna->out);
	dna->out = flag_blk(dna);
	dna->out = set_length_digit(dna);
	if (dna->conv_lx)
	{
		while (dna->out[i])
		{
			dna->out[i] = ft_toupper(dna->out[i]);
			i++;
		}
	}
	//printf("chiasse *%s\n", dna->out);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}

void	compute_conv_lc (t_print *dna, va_list ap)
{

	wchar_t raw;

	raw = va_arg(ap, wchar_t);
	//utf8_enc(raw);
	dna->ret_nb += wcharlen(raw);
	ft_putwchar(raw);
}

char	*compute_conv_c (t_print *dna, va_list ap)
{
	char c;

	c = va_arg(ap, int);
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * 2)))
		return (NULL);

	//printf("test %d\n", (int)dna->ret_nb);
	dna->out[0] = c;
	dna->out = set_length_char(dna);
	dna->ret_nb += (int)ft_strlen(dna->out);
	ft_putstr(dna->out);
	return (dna->out);
}

char	*compute_conv_mod(t_print *dna, va_list ap)
{
	// printf("conv_mod\n");
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * 2)))
		return (NULL);
	*dna->out = '%';
	dna->out = set_length_char(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	return (dna->out);
}

//orig :         0x0000003039|
// 0x7fffffff

void	conv_switch(t_print *dna, va_list ap)
{
	if (dna->conv_d || dna->conv_i)
		compute_conv_d(dna, ap);
	if (dna->conv_o)
		compute_conv_o(dna, ap);
	if (dna->conv_ld)
		compute_conv_ld(dna, ap);
	if (dna->conv_s)
		compute_conv_s(dna, ap);
	if (dna->conv_x || dna->conv_lx)
		compute_conv_x(dna, ap);
	if (dna->conv_c)
		compute_conv_c(dna, ap);
	if (dna->conv_lc)
		compute_conv_lc(dna, ap);
	if (dna->conv_ls)
		compute_conv_ls(dna, ap);
	if (dna->conv_p)
		dna->out = compute_conv_p(dna, ap);
	if (dna->conv_mod)
		dna->out = compute_conv_mod(dna, ap);
}

void	compute_htag(t_print *dna)
{
	// printf("htag = %d\n", (int)count_unicode((wchar_t *)dna->out));
	ft_memcpy(dna->out, "0x", 2);
}

/*
void	compute_htag(t_print *dna)
{
	char *tmp;

	//ft_putstr(dna->out);
	//ft_putchar('\n');
	if ()

	if (dna->base > dna->width)
	{

	}
*/
//}
/*
void	flag_switch(t_print *dna, const char *format, va_list ap)
{
	// if (dna->width)
	// 	compute_width(dna, format, ap);
}
*/

void	compute_conv(t_print *dna, va_list ap)
{
	// printf("pitch nb = %d\n", dna->pitch_nb);
	conv_switch(dna, ap);
	//ft_putstr("Conv_START\n");
	//flag_switch(dna, format, ap);
	//exec_cast(dna, format, ap);
	//cast_switch(dna, format, ap);
}
