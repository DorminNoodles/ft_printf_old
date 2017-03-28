/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:11:23 by lchety            #+#    #+#             */
/*   Updated: 2017/03/28 14:41:14 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_s(t_print *dna, va_list ap)
{
	char	*str;

	if (dna->conv_s && dna->cast_l)
	{
		conv_ls(dna, ap);
		return ;
	}
	str = va_arg(ap, char*);
	if (!str)
		print_null(dna);
	else
	{
		if (!(dna->out = ft_strnew(ft_strlen(str))))
			exit(EXIT_FAILURE);
		ft_memcpy(dna->out, str, ft_strlen(str));
		set_length_char(dna);
		dna->ret_nb += ft_strlen(dna->out);
		ft_putstr_buff(dna->out);
		free(dna->out);
	}
}

void	conv_ls(t_print *dna, va_list ap)
{
	wchar_t		*str;
	int			size;
	char		*test;
	int			i;

	i = 0;
	str = va_arg(ap, wchar_t*);
	if (!str)
		print_null(dna);
	else
	{
		size = (int)ft_wstrlen(str);
		if (!(dna->out = (char*)ft_memalloc(sizeof(int) * (size + 1))))
			exit(EXIT_FAILURE);
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
