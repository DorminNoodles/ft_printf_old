/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:26:57 by lchety            #+#    #+#             */
/*   Updated: 2017/03/27 14:32:38 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_c(t_print *dna, va_list ap)
{
	char	c;
	char	*tmp;

	if (dna->pitch && !dna->pitch_nb)
		dna->pitch = FALSE;
	c = va_arg(ap, int);
	if (!(dna->out = (char*)ft_memalloc(sizeof(char) * 2)))
		exit(EXIT_FAILURE);
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
	if (dna->justify && c == 0)
		ft_putchar('\0');
	ft_putstr(dna->out);
	if (!dna->justify && c == 0)
		ft_putchar('\0');
	free(dna->out);
}

void	conv_lc(t_print *dna, va_list ap)
{
	wchar_t raw;

	if (MB_CUR_MAX > 1)
	{
		raw = va_arg(ap, wchar_t);
		dna->ret_nb += ft_wcharlen(raw);
		ft_putwchar(raw);
	}
	else
	{
		dna->ret_nb++;
		ft_putchar((char)va_arg(ap, int));
	}
}
