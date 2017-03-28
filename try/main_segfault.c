/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_segfault.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 11:14:20 by lchety            #+#    #+#             */
/*   Updated: 2017/03/03 19:01:41 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int main(void)
{
	printf("Little process.\n");
	printf("Test  %.*s\n", "KELLOGS", 5);
	printf("Nooom\n");

	size_t a = LONG_MAX;
	printf("%s\n", a);
	return (1);
}
