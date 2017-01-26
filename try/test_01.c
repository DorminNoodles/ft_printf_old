/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 13:50:43 by lchety            #+#    #+#             */
/*   Updated: 2017/01/14 12:44:30 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

char *sapin(void)
{
	char buff[5];
	buff[0] = 'R';
	buff[1] = 'o';
	buff[2] = 't';

	return (buff);
}

int *return_int()
{
	int buff[] = {5,7,8,4,52,4,7,7};
	return (buff);
}

int main(void)
{
	int test[20];
	//ft_printf("hello world %d\n", 42);
	test = return_int();
	//printf("%c%c%c%c\n", test[0],test[1],test[2],test[3]);
	return (1);
}
