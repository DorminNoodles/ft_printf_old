/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_buff.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 00:01:34 by lchety            #+#    #+#             */
/*   Updated: 2017/03/06 10:30:29 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void 	ft_putchar_enhance(const char *c, size_t buff_size)
{
	write(1, c, buff_size);
}

void	ft_putstr_buff(char const *s)
{
	ft_putchar_enhance(s, ft_strlen(s));
}
