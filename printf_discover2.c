/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_discover2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 22:15:53 by lchety            #+#    #+#             */
/*   Updated: 2017/01/10 17:11:45 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>


int testing(int nb, ... );

int grinch_func(int nb, ...)
{
	char *str;
	int i;

	i = 0;
	va_list arguments;
	va_start(arguments, nb);
	str = va_arg(arguments, char*);
	printf("test varg : %s \n", str);
	str = va_arg(arguments, char*);
	printf("test varg : %s \n", str);
	va_end(arguments);

	return (0);
}

int main(void)
{
	printf("ret = %d\n", printf("hello world\n"));
	printf("test = %hhhlll....5+ 0   ..25 ... 4d\n", 5);
	printf("test = %hhhlll....5+ 0   ..25 ... .4d\n", 5);
	printf("test = %h  hd\n", 5000);
	printf("");
	printf("");
	printf(" \n");
	printf("%");
	printf("\n 4 \n");
	printf("bob %Id\n", 25);
	printf("bob %hid\n", 25);
	printf("bob %hdid\n", 25);
	printf("%hhhllll......\n");
	printf("%hhhlll.#2$#hh bouriquet\n");
	printf("%hhlllqq2$qqz*$zzz.zzz*\n");
	long long babyfoot = 9223;
	long long int bigfoot = 9223372036854775807;

	printf(" taille short = %d\n", sizeof( short ));
	printf(" taille unsigned short = %d\n", sizeof( unsigned short ));
	printf(" taille int = %d\n", sizeof( int ));
	printf(" taille unsigned int = %d\n", sizeof( unsigned int ));
	printf(" taille long int = %d\n", sizeof( long int ));
	printf(" taille unsigned long int = %d\n", sizeof( unsigned long int ));
	printf(" taille long long int = %d\n", sizeof( long long int ));
	printf(" taille unsigned long long int = %d\n", sizeof( unsigned long long int ));

	printf("%d\n", 4%2);

	return (1);
}


/*
int testing(int nb, ... )
{
	char *str;
	nb += 2;

	va_list arguments;
	va_start(arguments, nb);
	str = va_arg(arguments, char*);
	printf("test varg : %s \n", str);
	va_end(arguments);


	return (1);
}
*/
