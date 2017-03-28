/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:11:21 by lchety            #+#    #+#             */
/*   Updated: 2017/03/17 14:00:47 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	cast_default(t_print *dna, va_list ap)
{
	if (dna->conv_d)
		return ((intmax_t)va_arg(ap, int));
	if (dna->conv_x || dna->conv_lx)
		return ((intmax_t)va_arg(ap, unsigned int));
	if (dna->conv_ld)
		return ((intmax_t)va_arg(ap, long));
	if (dna->conv_u || dna->conv_lu)
		return ((intmax_t)va_arg(ap, unsigned int));
	if (dna->conv_b)
		return ((intmax_t)va_arg(ap, intmax_t));
	if (dna->conv_o)
		return ((unsigned int)va_arg(ap, uintmax_t));
	if (dna->conv_lo)
		return ((long long)va_arg(ap, uintmax_t));
	return (va_arg(ap, int));
}

intmax_t	exec_cast_signed(t_print *dna, va_list ap)
{
	char		*str;
	intmax_t	ret;

	ret = 0;
	str = NULL;
	if (dna->cast_j)
		return ((intmax_t)(long long)va_arg(ap, uintmax_t));
	if (dna->cast_l)
		return ((intmax_t)(long long)va_arg(ap, uintmax_t));
	if (dna->cast_hh)
		return ((intmax_t)(char)va_arg(ap, intmax_t));
	if (dna->cast_z)
		return ((intmax_t)(ssize_t)va_arg(ap, uintmax_t));
	if (dna->cast_h)
		return ((intmax_t)(short)va_arg(ap, intmax_t));
	if (dna->cast_ll)
		return ((intmax_t)(long long)va_arg(ap, intmax_t));
	return (cast_default(dna, ap));
}

intmax_t	exec_cast_unsigned(t_print *dna, va_list ap)
{
	char		*str;
	intmax_t	ret;

	ret = 0;
	str = NULL;
	if (dna->cast_j)
		return ((intmax_t)(uintmax_t)va_arg(ap, intmax_t));
	if (dna->cast_l)
		return ((intmax_t)(unsigned long long)va_arg(ap, intmax_t));
	if (dna->cast_hh)
		return ((intmax_t)(unsigned char)va_arg(ap, intmax_t));
	if (dna->cast_h)
		return ((intmax_t)(unsigned short)va_arg(ap, uintmax_t));
	if (dna->cast_ll)
		return ((intmax_t)(unsigned long long)va_arg(ap, intmax_t));
	if (dna->cast_z)
		return ((intmax_t)(size_t)va_arg(ap, intmax_t));
	return (cast_default(dna, ap));
}

intmax_t	cast_unsigned_wide(t_print *dna, va_list ap)
{
	char		*str;
	intmax_t	ret;

	ret = 0;
	str = NULL;
	if (dna->cast_j)
		return ((intmax_t)(uintmax_t)va_arg(ap, intmax_t));
	if (dna->cast_l)
		return ((intmax_t)(unsigned long long)va_arg(ap, intmax_t));
	if (dna->cast_hh)
		return ((intmax_t)(unsigned short)va_arg(ap, intmax_t));
	if (dna->cast_h)
		return ((intmax_t)(unsigned short)va_arg(ap, uintmax_t));
	if (dna->cast_ll)
		return ((intmax_t)(unsigned long long)va_arg(ap, intmax_t));
	if (dna->cast_z)
		return ((intmax_t)(size_t)va_arg(ap, intmax_t));
	return (cast_default(dna, ap));
}

intmax_t	cast_c(t_print *dna, va_list ap)
{
	if (dna->cast_hh)
		return ((intmax_t)(char)va_arg(ap, intmax_t));
	if (dna->cast_h)
		return ((intmax_t)(unsigned int)va_arg(ap, uintmax_t));
	if (dna->cast_ll)
		return ((intmax_t)(unsigned long long)va_arg(ap, uintmax_t));
	if (dna->cast_l)
		return ((intmax_t)(unsigned long long)va_arg(ap, uintmax_t));
	if (dna->cast_j)
		return ((intmax_t)(uintmax_t)va_arg(ap, intmax_t));
	return ((intmax_t)va_arg(ap, unsigned int));
}
