/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maindemerde.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouel <ahouel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 14:05:16 by ahouel            #+#    #+#             */
/*   Updated: 2017/03/27 14:48:57 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <locale.h>
#include "ft_printf.h"

int ft_printf(const char *format, ...);

int main()
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	//setlocale(LC_ALL, "");


	i = printf("%C", 847);
	printf("\nleur return : %d\n", i);
	j = ft_printf("%C", 847);
	printf("\nmon return : %d\n", j);
	return (0);
}
