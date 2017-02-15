/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:09:10 by lchety            #+#    #+#             */
/*   Updated: 2017/02/15 17:34:31 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	compute_conv_s (t_print *dna, va_list ap)
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
	dna->out = ft_strnew(ft_strlen(tmp));
	if (!dna->out)
	return;
	dna->base_size = ft_strlen(tmp);
	ft_strcpy(dna->out, tmp);
	if (!dna->pitch)
		do_width(dna);
	else
		do_pitch(dna, TRUE);
	// printf("Bol = %d\n", dna->width);

	//printf("test %d\n", dna->base_size);
	dna->ret_nb += ft_strlen(dna->out);
		ft_putstr(dna->out);
	free(dna->out);
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
		dna->out = (char *)malloc(sizeof(wchar_t) * (int)count_unicode(tmp));
		ft_memcpy(dna->out, tmp, sizeof(wchar_t) * (int)count_unicode(tmp) + 1);
	}
	i = 0;
	while (*(((wchar_t *)dna->out) + i) != '\0')
	{
		ft_putwchar(*(((wchar_t *)dna->out) + i));
		i++;
	}
	free(dna->out);
	dna->out = NULL;
}

void	compute_conv_d(t_print *dna, va_list ap)
{
	intmax_t nb;

	nb = exec_cast_signed(dna, ap);
	// printf("ret == %jd", ret);
	// printf("%ld\n", ret);
	dna->pre_min = (nb < 0) ? TRUE : FALSE;
	nb = (nb < 0) ? nb * (-1) : nb;
	//printf("%ld\n", nb);
	// printf("test == %d\n", dna->pre_min);
	dna->out = ft_itoa_printf(nb, 10);
	dna->base_size = ft_strlen(dna->out);
	if (dna->pitch_nb > dna->base_size)
		dna->out = do_pitch(dna, FALSE);
	else if (prefix_count(dna) && dna->pitch_nb)
		prefix(dna);
	printf("42 %s\n", dna->out);
	if (dna->pitch && dna->width > ft_strlen(dna->out))
	{
		printf("45 %s\n", dna->out);
		do_width(dna);
	}
	else if (dna->width > ft_strlen(dna->out) + prefix_count(dna))
	{
		printf("43 %s\n", dna->out);
		if (!dna->flag_0)
		{
			printf("44 %s\n", dna->out);
			//printf("HAAAA\n");
			add_prefix(dna);
			do_width(dna);
			// printf("3.2 : %s\n", dna->out);
		}
		else
		{
			printf("45 %s\n", dna->out);
			prefix(dna);
			printf("62 %s\n", dna->out);
			do_width(dna);
			printf("58 %s\n", dna->out);
		}
	}
	else if (!dna->pitch && !dna->width)
	{

		printf("46 %s\n", dna->out);
		// printf("4 : %s\n", dna->out);
		prefix(dna);
	}

	// printf("test = %d\n", dna->width);
	//if(dna->width)
		//do_width(dna);

	//dna->out = do_width(dna);
	/*
	if (dna->pitch)
	{
		compute_pitch(dna, ap, FALSE);
		ft_putstr(prefix(dna));
	}
	else
	{
		compute_width(dna);
	}
	*/
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
	// printf("test == %s\n", dna->out);
	// dna->out = ft_itoa_printf(ret, base);
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


void	compute_conv_lc (va_list ap)
{
	//printf("CONV_LC\n");

	wchar_t raw;

	raw = va_arg(ap, wchar_t);
	//utf8_enc(raw);
	ft_putwchar(raw);
}

void compute_conv_p(t_print *dna, va_list ap)
{
	// address limit is 8 bytes for 64 bits so 0xFFFF FFFF FFFF FFFF 16 is max
	unsigned long a;
	void *tmp;

	a = 0;
	tmp = va_arg(ap, void *);

	a = (unsigned long)tmp;
	dna->out = ft_itoa_printf(a, 16);
	if (!dna->out)
	return;
	// tmp =
	dna->ret_nb += ft_strlen(dna->out) + 2;
	ft_putstr("0x");
	ft_putstr(dna->out);
	free(dna->out);
}


void 	compute_conv_o(t_print *dna, va_list ap)
{
	uintmax_t n;

	// printf("conv_o\n");
	//printf("test01 == %d\n", dna->width);
	n = va_arg(ap, uintmax_t);
	// printf("test = %ju\n", (uintmax_t)n);
	dna->out = ft_itoa_printf((long)n, 8);
	// printf("test = %s\n", dna->out);
	dna->base_size = ft_strlen(dna->out);
	if (!dna->out)
		return;
	if (!dna->pitch)
		do_width(dna);
	else
		do_pitch(dna, FALSE);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
}

void	compute_conv_x(t_print *dna, va_list ap)
{
	int nb;
	intmax_t ret;
	int		i;

	ret = 0;
	nb = 0;
	i = 0;
	ret = exec_cast_unsigned(dna, ap);
	dna->out = ft_itoa_printf(ret, 16);
	if (dna->conv_lx)
	{
		while (dna->out[i])
		{
			dna->out[i] = ft_toupper(dna->out[i]);
			i++;
		}
	}
	dna->base_size = ft_strlen(dna->out);
	// printf("1 %s\n", dna->out);
	do_width(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(prefix(dna));
	ft_putstr_buff(dna->out);
	free(dna->out);
}

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
	if (dna->conv_lc)
		compute_conv_lc(ap);
	if (dna->conv_ls)
		compute_conv_ls(dna, ap);
	if (dna->conv_p)
		compute_conv_p(dna, ap);
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
