/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:09:10 by lchety            #+#    #+#             */
/*   Updated: 2017/03/15 12:44:01 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_null(t_print *dna)
{
	if (!(dna->out = ft_strnew(ft_strlen("(null)"))))
		exit (EXIT_FAILURE);
	ft_memcpy(dna->out, "(null)", ft_strlen("(null)"));
	set_length_char(dna);
	ft_putstr_buff(dna->out);
	dna->ret_nb += ft_strlen(dna->out);
	free(dna->out);
}

void	compute_conv_p(t_print *dna, va_list ap)
{
	unsigned long a;
	void *tmp;

	a = 0;
	tmp = va_arg(ap, void *);
	dna->htag = TRUE;
	a = (unsigned long)tmp;
	if (!(dna->out = ft_itoa_printf(a, 16)))
		exit(EXIT_FAILURE);
	if (!tmp && dna->pitch && !dna->pitch_nb)
		dna->out[0] = '\0';
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}

void 	compute_conv_o(t_print *dna, va_list ap)
{
	uintmax_t n;

	n = 0;
	n = exec_cast_unsigned(dna, ap);

	if (!(dna->out = ft_itoa_printf(n, 8)))
		exit (1);
	dna->pre_pls = FALSE;
	if (dna->pitch && !dna->pitch_nb && !dna->htag)
		dna->out[0] = '\0';

	if (n == 0)
		dna->htag = FALSE;
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}

void 	compute_conv_lo(t_print *dna, va_list ap)
{
	uintmax_t n;

	n = 0;
	n = cast_unsigned_wide(dna, ap);
	dna->pre_pls = FALSE;
	if (!(dna->out = ft_itoa_printf(n, 8)))
		exit (1);
	if (dna->pitch && !dna->pitch_nb && !dna->htag)
		dna->out[0] = '\0';
	if (n == 0)
		dna->htag = FALSE;
	dna->base_size = ft_strlen(dna->out);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}

void	compute_conv_u(t_print *dna, va_list ap)
{
	uintmax_t nb;
	dna->pre_pls = FALSE;
	nb = exec_cast_unsigned(dna, ap);

	if (!(dna->out = ft_itoa_printf(nb, 10)))
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
	dna->pre_pls = FALSE;
	nb = va_arg(ap, uintmax_t);

	if (!(dna->out = ft_itoa_printf(nb, 10)))
		exit(1);
	if (dna->pitch && dna->pitch_nb == 0)
		dna->out[0] = '\0';
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
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
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}

char	*compute_conv_mod(t_print *dna, va_list ap)
{
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * 2)))
		return (NULL);
	*dna->out = '%';
	dna->out = set_length_char(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
	return (dna->out);
}

void	compute_conv_null(t_print *dna, va_list ap)
{
	dna->out = set_length_char(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
}

char	*compute_conv_b(t_print *dna, va_list ap)
{
	intmax_t n;
	n = exec_cast_unsigned(dna, ap);

	dna->out = ft_itoa_printf(n, 2);
	dna->out = set_length_digit(dna);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr(dna->out);
	free(dna->out);
	return (dna->out);
}

void	convert(t_print *dna, va_list ap)
{
	if (dna->conv_s)
		conv_s(dna, ap);
	else if (dna->conv_ls)
		conv_ls(dna, ap);
	else if (dna->conv_p)
		compute_conv_p(dna, ap);
	else if (dna->conv_d || dna->conv_i)
		conv_d(dna, ap);
	else if (dna->conv_ld)
		conv_ld(dna, ap);
	else if (dna->conv_o)
		compute_conv_o(dna, ap);
	else if (dna->conv_lo)
		compute_conv_lo(dna, ap);
	else if (dna->conv_u)
		compute_conv_u(dna, ap);
	else if (dna->conv_lu)
		compute_conv_lu(dna, ap);
	else if (dna->conv_x || dna->conv_lx)
		compute_conv_x(dna, ap);
	else if (dna->conv_c)
		conv_c(dna, ap);
	else if (dna->conv_lc || (dna->cast_l && dna->conv_c))
		conv_lc(dna, ap);
	else if (dna->conv_mod)
		dna->out = compute_conv_mod(dna, ap);
	else if (dna->conv_b)
		dna->out = compute_conv_b(dna, ap);
	else if (dna->conv_null)
		compute_conv_null(dna, ap);
}
