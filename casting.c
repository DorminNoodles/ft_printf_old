/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 14:09:55 by lchety            #+#    #+#             */
/*   Updated: 2017/02/11 17:00:18 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "ft_printf.h"
#include <stdio.h>

intmax_t	cast_default(t_print *dna, va_list ap)
{
	// printf("cast default\n");
	if (dna->conv_d)
		return ((intmax_t)va_arg(ap, int));
	if (dna->conv_x)
		return ((intmax_t)va_arg(ap, unsigned int));
	if (dna->conv_ld)
		return ((intmax_t)va_arg(ap, unsigned int));

	return (va_arg(ap, int));
}

intmax_t	exec_cast_signed(t_print *dna, va_list ap)
{
	char *str;
	intmax_t ret;

	ret = 0;
	str = NULL;
	if (dna->cast_hh)
		return((intmax_t)(char)va_arg(ap, intmax_t));
	if (dna->cast_h)
		return((intmax_t)(short)va_arg(ap, intmax_t));
	if (dna->cast_ll)
		return((intmax_t)(long long)va_arg(ap, intmax_t));
	if (dna->cast_l)
		return((intmax_t)(long long)va_arg(ap, uintmax_t));
	if (dna->cast_z)
		return((intmax_t)(long long)va_arg(ap, uintmax_t));
	// if (conv_info->cast_ll)
	// 	ret = (intmax_t)(long long int)ret;
	// if (conv_info->cast_j)
	// 	ret = (intmax_t)ret;
	return (cast_default(dna, ap));
}

intmax_t	exec_cast_unsigned(t_print *dna, va_list ap)
{
	char *str;
	intmax_t ret;

	ret = 0;
	str = NULL;
	if (dna->cast_hh)
		return((intmax_t)(unsigned char)va_arg(ap, intmax_t));
		// printf("KERO -1\n");
	if (dna->cast_h)
		return((intmax_t)(unsigned short)va_arg(ap, uintmax_t));
	if (dna->cast_ll)
		return((intmax_t)(unsigned long long)va_arg(ap, intmax_t));
	if (dna->cast_j)
		return((intmax_t)(uintmax_t)va_arg(ap, intmax_t));
	// if (dna->cast_l)
	// 	ret = (intmax_t)(long int)ret;
	// if (dna->cast_ll)
	// 	ret = (intmax_t)(long long int)ret;
	// if (dna->cast_z)
	// 	ret = (intmax_t)(size_t)ret;
	// if (dna->cast_j)
	// 	ret = (intmax_t)ret;
	return (cast_default(dna, ap));
}

intmax_t	cast_ld(t_print *dna, va_list ap)
{
	char *str;
	intmax_t ret;

	ret = 0;
	str = NULL;
	// printf("cast = %d\n", dna->cast_h);
	if (dna->cast_hh)
		return((intmax_t)(unsigned int)va_arg(ap, intmax_t));
	if (dna->cast_h)
		return((intmax_t)(unsigned int)va_arg(ap, uintmax_t));
	if (dna->cast_ll)
		return((intmax_t)(unsigned long long)va_arg(ap, uintmax_t));
	if (dna->cast_l)
		return((intmax_t)(unsigned long long)va_arg(ap, uintmax_t));
	if (dna->cast_j)
		return((intmax_t)(uintmax_t)va_arg(ap, intmax_t));
	// if (dna->cast_l)
	// 	ret = (intmax_t)(long int)ret;
	// if (dna->cast_ll)
	// 	ret = (intmax_t)(long long int)ret;
	// if (dna->cast_z)
	// 	ret = (intmax_t)(size_t)ret;
	// if (dna->cast_j)
	// 	ret = (intmax_t)ret;
	// printf("KERO\n");
	return ((intmax_t)va_arg(ap, unsigned int));
}


/*

	1111 1111 1111 1111 1111 1111 1111
											11011101
	0xFFFFFFDD = 11111111 11111111 11111111 11011101
				 00000000 00000000 00000000 00100011

	0xDD = 11011101

	if char = 11011101
	cast int > 11111111 11111111 11111111 11011101


	if neg mask =

	CAST de merde

	222 == 1101 1110 == -34 (signed)

	int -34 ==

	9 223 372 036 854 775 807 + 2
	-9 223 372 036 854 775 808
	9 223 372 036 854 775 809
	printf("RATTTTTatouille : %jd\n", 18446744073709551615 - 35);

	je dois regarder si l uintmax depasse 9223372036854775807 si oui moe....
	mais si je prend un unintmax en argument je peux pas savoir le signe...
	ou je prend un int max et si je dit a l atoi qu il est unsigned je cast tout dans un uintmax

	j envoi un uintmax dans un intmax et ca me donnera un intmax negatif
	que non faut que je le cast en uintmax apres

	donc faut que j envoi un uintmax

	j ai aucun moyen de savoir si ce que j envoi dans un unsigned int max etait a la base negatif ou positif

	donc si je veux qu un seul itoa je dois lui signaler

	si c est un negatif j ajoute le - et j enleve 9 223 372 036 854 775 807



*/
