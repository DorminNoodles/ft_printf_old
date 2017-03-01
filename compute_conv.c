/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:09:10 by lchety            #+#    #+#             */
/*   Updated: 2017/03/01 23:43:41 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	conv_null(t_print *dna)
{
	if(!(dna->out = ft_strnew(ft_strlen("(null)"))))
		exit (EXIT_FAILURE);
	ft_memcpy(dna->out, "(null)", ft_strlen("(null)"));
	set_length_char(dna);
	ft_putstr_buff(dna->out);
	dna->ret_nb += ft_strlen(dna->out);
	free(dna->out);
}

void	compute_conv_s (t_print *dna, va_list ap)
{
	char	*str;

	str = va_arg(ap, char*);
	if (!str)
		conv_null(dna);
	else
	{
		if(!(dna->out = ft_strnew(ft_strlen(str))))
			exit (EXIT_FAILURE);
		ft_memcpy(dna->out, str, ft_strlen(str));
		set_length_char(dna);
		dna->ret_nb += ft_strlen(dna->out);
		ft_putstr_buff(dna->out);
		free(dna->out);
	}



	// char *tmp;
	// int nb;
	// //int ret;
	//
	// //ret = 0;
	// nb = 0;
	// tmp = va_arg(ap, char*);
	// //printf("pouet pouet %s\n", tmp);
	// // if (!tmp)
	// // {
	// // 	tmp = ft_strnew(ft_strlen("(null)"));
	// // 	ft_memcpy(tmp, "(null)", ft_strlen("(null)"));
	// // }
	// dna->out = ft_strnew(ft_strlen(tmp) + 1);
	// if (!dna->out)
	// 	exit(1);
	// //ft_strcpy(dna->out, tmp);
	// //dna->base_size = ft_strlen(tmp);
	// // dna->out = set_length_char(dna);
	// //dna->ret_nb += ft_strlen(dna->out);
	// ft_putstr(dna->out);
	// free(dna->out);
}

void	compute_conv_ls (t_print *dna, va_list ap)
{
	wchar_t		*str;
	int			size;
	char		*test;
	int i;

	i = 0;
	size = 0;
	str = va_arg(ap, wchar_t*);
	if (!str)
		conv_null(dna);
	else
	{
		size = (int)ft_wstrlen(str);
		if(!(dna->out = (char*)ft_memalloc(sizeof(int) * (size + 1))))
			exit (EXIT_FAILURE);
		ft_memcpy(dna->out, (char*)str, sizeof(int) * ft_wstrlen(str));
		set_length_wchar(dna);
		dna->ret_nb += count_unicode((wchar_t*)dna->out);
		i = 0;
		while (*(((wchar_t *)dna->out) + i) != '\0')
		{
			ft_putwchar(*(((wchar_t *)dna->out) + i));
			i++;
		}
		free(dna->out);
	}
}

void	compute_conv_p(t_print *dna, va_list ap)
{
	// address limit is 8 bytes for 64 bits so 0xFFFF FFFF FFFF FFFF 16 is max
	unsigned long a;
	void *tmp;

	a = 0;
	tmp = va_arg(ap, void *);
	dna->htag = TRUE;
	a = (unsigned long)tmp;
	if(!(dna->out = ft_itoa_printf(a, 16)))
		exit(EXIT_FAILURE);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}

void	compute_conv_d(t_print *dna, va_list ap)
{
	intmax_t nb;

	nb = exec_cast_signed(dna, ap);
	dna->pre_min = (nb < 0) ? TRUE : FALSE;
	nb = (nb < 0) ? nb * (-1) : nb;
	if (!(dna->out = ft_itoa_printf(nb, 10)))
		exit(EXIT_FAILURE);
	if (nb == 0 && dna->pitch && !dna->pitch_nb)
		dna->out[0] = '\0';
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	dna->out = flag_blk(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}

void	compute_conv_ld(t_print *dna, va_list ap)
{
	intmax_t nb;
	nb = (intmax_t)(long)va_arg(ap, intmax_t);
	dna->pre_min = (nb < 0) ? TRUE : FALSE;
	nb = (nb < 0) ? nb * (-1) : nb;
	if (!(dna->out = ft_itoa_printf(nb, 10)))
		exit(1);
	if (nb == 0 && dna->pitch && !dna->pitch_nb)
		dna->out[0] = '\0';
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	dna->out = flag_blk(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}

void 	compute_conv_o(t_print *dna, va_list ap)
{
	uintmax_t n;
	// char *bite;

	//printf("Conv_o\n");
	n = va_arg(ap, uintmax_t);
	if (!(dna->out = ft_itoa_printf(n, 8)))
		exit (1);

	if (dna->pitch && !dna->pitch_nb && !dna->htag)
		dna->out[0] = '\0';

	// if (!(bite = (char*)ft_memalloc(sizeof(char) * 200)))
	// 	exit (1);

	//bite[5] = '\0';

	//free(bite);
	//printf("%s", bite + 1);

	if (n == 0)
		dna->htag = FALSE;
	//if (dna)
		//dna->htag = FALSE;
	dna->base_size = ft_strlen(dna->out);
	// printf("base_size = %d\n", (int)dna->base_size);
	// printf("test = %s\n", dna->out);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
	//ft_putstr("chiotte\n");
}

void	compute_conv_u(t_print *dna, va_list ap)
{
	uintmax_t nb;
	// printf("conv_u\n");
	dna->pre_pls = FALSE;
	nb = exec_cast_unsigned(dna, ap);
	//printf("test %d\n", nb);

	if(!(dna->out = ft_itoa_printf(nb, 10)))
		exit(1);
	if (dna->pitch && dna->pitch_nb == 0)
		dna->out[0] = '\0';
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}

void	compute_conv_lu(t_print *dna, va_list ap)
{
	uintmax_t nb;
	//printf("conv_u\n");
	dna->pre_pls = FALSE;
	nb = va_arg(ap, uintmax_t);
	// nb = exec_cast_unsigned(dna, ap);
	// printf("test %U\n", nb);

	if(!(dna->out = ft_itoa_printf(nb, 10)))
		exit(1);
	if (dna->pitch && dna->pitch_nb == 0)
		dna->out[0] = '\0';
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
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
	if (!c && dna->width > 1)
	{
		dna->ret_nb++;
		dna->width--;
	}
	dna->out = set_length_char(dna);
	if ((int)ft_strlen(dna->out))
		dna->ret_nb += (int)ft_strlen(dna->out);
	else
		dna->ret_nb++;
	ft_putstr(dna->out);
	free(dna->out);
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
	free(dna->out);
	return (dna->out);
}

char	*compute_conv_b(t_print *dna, va_list ap)
{
	intmax_t n;
	n = exec_cast_unsigned(dna, ap);
	//printf("test %d\n", n);

	dna->out = ft_itoa_printf(n, 2);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
	return (dna->out);
}
//1111 1111 1111 1111 1111 1111 1111 111

//orig :         0x0000003039|
// 0x7fffffff

void	conv_switch(t_print *dna, va_list ap)
{
	// printf("conv_switch\n");
	if (dna->conv_s)
		compute_conv_s(dna, ap);
	if (dna->conv_ls)
		compute_conv_ls(dna, ap);
	if (dna->conv_p)
		compute_conv_p(dna, ap);
	if (dna->conv_d || dna->conv_i)
		compute_conv_d(dna, ap);
	if (dna->conv_ld)
		compute_conv_ld(dna, ap);
	if (dna->conv_o)
		compute_conv_o(dna, ap);
	if (dna->conv_u)
		compute_conv_u(dna, ap);
	if (dna->conv_lu)
		compute_conv_lu(dna, ap);
	if (dna->conv_x || dna->conv_lx)
		compute_conv_x(dna, ap);
	// if (dna->conv_c)
	// 	compute_conv_c(dna, ap);
	// if (dna->conv_lc)
	// 	compute_conv_lc(dna, ap);
	// if (dna->conv_mod)
	// 	dna->out = compute_conv_mod(dna, ap);
	// if (dna->conv_b)
		// dna->out = compute_conv_b(dna, ap);

	//printf("TEST Y %s\n", dna->out);
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
