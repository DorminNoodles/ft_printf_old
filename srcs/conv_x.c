/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 14:57:29 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 18:42:20 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		strupper(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

void			conv_x(t_print *dna, va_list ap)
{
	int			nb;
	intmax_t	ret;
	int			i;

	ret = 0;
	nb = 0;
	i = 0;
	ret = exec_cast_unsigned(dna, ap);
	if (ret == 0)
		dna->htag = FALSE;
	dna->out = ft_itoa_base(ret, 16);
	if (ret == 0 && dna->pitch && !dna->pitch_nb)
		dna->out[0] = '\0';
	dna->base_size = ft_strlen(dna->out);
	dna->out = flag_blk(dna);
	dna->out = set_length_digit(dna);
	if (dna->conv_lx)
		strupper(dna->out);
	dna->ret_nb += ft_strlen(dna->out);
	ft_putstr_buff(dna->out);
	free(dna->out);
}
