/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 16:36:52 by lchety            #+#    #+#             */
/*   Updated: 2017/04/06 11:08:37 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <locale.h>
#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int a;

	setlocale(LC_ALL, "C");
	setlocale(LC_ALL, "");
	setlocale(LC_ALL, "");
	setlocale(LC_ALL, "C");
	setlocale(LC_ALL, "");
	setlocale(LC_ALL, "");
	setlocale(LC_ALL, "C");
	a = printf("%C\n", 35);
	printf("%d\n", a);

	return (0);
}
