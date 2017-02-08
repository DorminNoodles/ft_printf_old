/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_discover.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 22:15:53 by lchety            #+#    #+#             */
/*   Updated: 2017/02/05 15:18:40 by lchety           ###   ########.fr       */
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

}

int main(void)
{
	int tab[5] = {47,12,58,95,33};
	int ret;


	printf("test int -> decimal %d\n", 25);
	printf("test int -> octal %o\n", 8);
	printf("test unsigned char -> decimal %hhd \n", (unsigned char)'r');
	printf("test double -> decimal %f\n", 1234567.89);



	//printf("test %.2f\n", 1234567.89);
	//printf("test %f\n", 1234567.89);
	printf("test %S", tab); //false

	printf("\n");
	printf("test %.2f\n", 1234567.89);
	printf("test %.4f\n", 1234567.89);
	printf("test %.8f\n", 1234567.89);
	printf("\n");

	printf("test %a\n", 2.f); //a == double... apres....
	printf("test %#a\n", 2.f);

	printf("test %x\n", 3);
	printf("test %#x\n", 3); //convert unsigned int to hexa
	printf("test %-6d\n", 101); // hum......
	printf("test %jd\n", 101000000001);//afficher intmax_t.....
	printf("\n");
	printf("test %4d\n", 125488);
	printf("test %20d\n", 125);
	printf("test %-20d \\0\n", 125);
	printf("test %-020d \\0\n", 125); //flag 0 is ignored with flag '-'
	printf("test %020d \\0\n", 125);

	printf("test %g \n", 124.215);
	printf("test %D \n", 2);
	printf("test %i \n", 2);
	printf("test %o \n", 2);//octal
	printf("test %O \n", 8);//octal aussi
	printf("test %u \n", 16);
	printf("test %U \n", 16);
	printf("test %x \n", 15);//hexa
	printf("test %X \n", 15);//hexa en maj !
	printf("test %c \n", 't');
	printf("test %C \n", 't');//character no shift
	printf("test %C \n", 'T');


	printf("test %06c \n");//warning mais fonctionne
	printf("test %05c \n", 'K');//undefined behavior but works

	printf("%s, %s %d, %.2d:%.2d\n", "lundi", "novembre", 22, 1, 8);//add 0 on hour and minutes
	printf("%s, %s %d, %.d:%.d\n", "lundi", "novembre", 22, 1, 8);
	printf("%.2s \n", "retour");

	char str1[] = "bob";
	char str2[] = "themask";

	grinch_func(2, str1, str2);

	printf("\n");
	printf("test \"%-6d.qdfwxq\" \n", 12);
	printf("test \"%%-6dfwxq\" \n", 12);
	printf("test %%d\n", 12);
	printf("test \"% 3d\"\n", 12);
	printf("test \"%.3d\"\n", 12);
	printf("test \"%-6.3d\"\n", 12);
	printf("test %.4f \n", 1.0);
	printf("test %.1f \n", 1.0);
	printf("test %.1d \n", 1);
	printf("test %.1s \n", "atom");
	printf("test %.3s \n", "atom");
	printf("test \"%2s\"\n", "atom");
	printf("test \"%8s\"\n", "atom");
	printf("\nDifference between padding and precision on s\n");
	printf("Padding %%8s -> \"%8s\"\n", "atom");
	printf("Precision %%.2s -> \"%.2s\"\n", "atom");
	printf("Precision on %%.5d -> \"%.5d\"\n", 12);
	printf("Precision on %%-.5d -> \"%-.5d\"\n", 12);
	printf("Precision on %%.-5d -> \"%.-5d\"\n", 12);
	printf("Precision on %%_.5d -> \"%_.5d\"\n", 12);
	printf("Precision on %%0.5d -> \"%0.5d\"\n", 12);
	printf("Precision on %%W.5d -> \"%W.5d\"\n", 12);
	printf("Precision on %%1.5d -> \"%1.5d\"\n", 12);
	printf("Precision on %%A.5d -> \"%W.5d\"\n", 12);
	printf("Precision on %%*.5d -> \"%*.5d\"\n", 12);

	printf("Test %*d \n", 1);
	printf("Test %*d \n", 1);
	printf("Test %*d \n", 1);
	printf("Test ha non rien... %*d \n", 1);
	printf("Test with # %#*d \n", 1);
	printf("Test %*2$d %*2$d \n", 1, 5);
	printf("Test %*d \n", 1, 3);
	printf("Test %*d \n", 1, 3, 4);
	printf("Test %*d \n", 1, 6, 7);
	printf("Test %2$*1$d \n", 1, 3);
	printf("Test %*3$d\n", 1, 2, 3);
	printf("Test %3$d\n", 1, 2, 3, 4);
	printf("Test %3$s\n", "maison", "ballon", "gomme");
	printf("Choisir argument avec %%2$s -> %2$s\n", "maison", "ballon", "gomme");

	printf("\nTest %.*2$s\n", "Kellogs", 5);
	printf("\nPrecision in arg %%.*3$s %.*3$s\n", "Ectoplasme", 3, 6);
	printf("\nTest %zd\n", (ssize_t)87);
	printf("Rajouter 0x a l hexa %#x\n", 15);
	printf("Test %#d\n", 25);
	printf("Test %#c\n", 'r');
	printf("Test %#C\n", 'r');
	printf("Test %#s\n", "Bouteille");
	printf("Test %#*d\n", 25);
	printf("Test %#*d\n", 25);
	printf("Test %#*d\n", 25, 5);
	printf("Test \"%#*d\"\n", 6, 12);
	printf("Longueur Min de champ dans arg %%#*d \"%#*d\"\n", 6, 12);
	printf("%%%%%%%%%%%%%%%d%%%d%%d\n", 8, 8);
	printf("Test %%%d\n", 8);
	printf("Test %hhd \n", 122);
	printf("# used with o, x or X et a, A, e, E, f, F, g or G \n");
	printf("Test %#o \n", 1);//force un 0...
	printf("Test %#hho \n", 202);
	printf("Test %lld \n", 8754865454521);
	printf("Test %.16lld \n", 8754865454521);

	printf ("Characters: %c %c \n", 'a', 65);
	printf ("Decimals: %d %ld\n", 1977, 650000L);
	printf ("Preceding with blanks: %10d \n", 1977);
	printf ("Preceding with zeros: %010d \n", 1977);
	printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf ("Width trick: %*d \n", 5, 10);
	printf ("%s \n", "A string");


	printf("Test %E  %+e \n", 333333333.24545151251554, 3.2);
	printf("Test %E  %#+e \n", 333333333.24545151251554, 3.2);
	printf("Test %E  %e \n", 333333333.24545151251554, 3.2);

	printf("Test %    d  bordel\n", 5);
	printf("Test %      %d  \n", 6);
	printf("Test %d bordel\n", 8);
	printf("Test %                dorcel\n", 8);
	printf("Test %++++++d \n", 8);
	printf("Test %-00000++++00++0+0+0+0+-------.*d \n", 8, 7, 6, 2);
	printf("Test %5$d \n", 8, 7, 6, 2, 9, 3);
	printf("Test %*d\n", 4, 5, 5);

	printf("\nTest %.*2$s\n", "Kellogs", 5);
	printf("Test %*3$d\n", 4, 5, 6, 2);
	printf("Test %d %*d\n", 4, 5, 6);

	printf("Test %d %*d\n", 4, 5, 6);
	printf("Test %     %\n");

	//printf("Test %lllllllllldddd \n", 9223372036854775807);
	printf("Test %.jjjhhhhhhhhhrhhhhhhhhhld\n", 9223372036854775807);

	printf("Test %0000......d\n", 25);
	printf("Test %0##--++-lllhh2$2$2$000......d\n", 25, 26, 27);
	printf("Test %...0##--++-lllhh2$3$2$000......d\n", 25, 26, 27, 28, 29);
	//le dernier $2 est prit en compte
	printf("Test %0##--++-lllhh02$2$2$000......d\n", 25, 26, 27);
	printf("Test %0##--++-lllhh02$2$2$000......d\n", 25, 26, 27);

	printf("Test  %.*s\n", "KELLOGS", "bobo");
	//printf("Test  %.*s\n", "KELLOGS", 5);//segfault
	printf("Test  %.*$s\n", "KELLOGS", 5, 2);
	printf("Test  %.s\n", "KELLOGS", 5, 2);
	printf("Test  %s\n", "KELLOGS", 5, 2);
	printf("Test  %.1s\n", "KELLOGS", 5, 2);//precision de 1
	printf("Test  %.3s\n", "KELLOGS", 5, 2);
	//printf("Test  %.*s\n", "KELLOGS", 5, 2);//segfault
	printf("Test  %.2$s\n", "KELLOGS", 5, 2);//s... undefined behaviorprintf_discover.c:208:19: warning: invalid conversion specifier '$' [-Wformat-invalid-specifier]

	printf("Test %.*2$s \n", "KELLOGS", 4);
	printf("Test %.*2$s \n", "KELLOGS", "apple");
	printf("Test %.*2$s \n", "KELLOGS", "cid");//bon comme il ne trouve pas d int il affiche la chaine entiere
	printf("Test %.*2$s \n", "KELLOGS", "cid", 2);
	printf("Test %.*3s \n", "KELLOGS", "cid", 2);
	printf("Test %.*s \n", "Crevette", "alpha", 2);
	//printf("Test %.*s \n", 5, 10);//segfault
	//printf("Test %s \n", 5);
	printf("Hello world%...hhlll***d \n", 6, 5, 4, 3);
	printf("Test %05c \n", 'r');
	printf("Test % 5c \n", 'r');
	printf("Test %5d \n", 4);
	printf("Test %05d \n", 4);
	printf("Test % d \n", 4);
	printf("Test % d \n", -4);

	printf("Test %0##r--++-lllhh02$2$2$000......d\n", 25, 26, 27);

	ret = printf("Test % d \n", -4);
	printf("%d\n", ret);
	ret = printf("aaa\n");
	printf("%d\n", ret);
	ret = printf("Test  %.1s\n", "KELLOGS", 5, 2);
	printf("%d\n", ret);
	printf("printf ret = %d\n", printf("Chaussette\n"));
	printf("Test  %.*s\n", "KELLOGS", 5);

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
