/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_proto.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:19:21 by lchety            #+#    #+#             */
/*   Updated: 2017/02/04 20:49:24 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>
#include <stdint.h>
#include <wchar.h>

//======================================================> conv_d

void	test_d_01(void)
{
	printf("Test_d => 01\n");
	printf("orig : %d\n", 42);
	ft_printf("cust : %d\n", 42);
	printf("\n");
}

void	test_d_02(void)
{
	printf("Test_d => 02\n");
	printf("orig : %d\n", INT_MIN);
	ft_printf("cust : %d\n", INT_MIN);
	printf("\n");
}

void	test_d_03(void)
{
	printf("Test_d => 03\n");
	printf("orig : %d\n", INT_MAX);
	ft_printf("cust : %d\n", INT_MAX);
	printf("\n");
}

void	test_d_04(void)
{
	printf("Test_d => 04\n");
	printf("orig : %.8d\n", 25);
	ft_printf("cust : %.8d\n", 25);
	printf("\n");
}

void	test_d_05(void)
{
	printf("Test_d => 05\n");
	printf("orig : %ld\n", LONG_MIN);
	ft_printf("cust : %ld\n", LONG_MIN);
	printf("\n");
}

void	test_d_06(void)
{
	printf("Test_d => 06\n");
	printf("orig : %.08d\n", 25);
	ft_printf("cust : %.08d\n", 25);
	printf("\n");
}

void	test_d_08(void)
{
	printf("Test_d => 08\n");
	printf("orig : %hhd\n", (char)25);
	ft_printf("cust : %hhd\n", (char)25);
	printf("\n");
}

void	test_d_09(void)
{
	printf("Test_d => 09\n");
	printf("orig : %hhd\n", (char)-25);
	ft_printf("cust : %hhd\n", (char)-25);
	printf("\n");
}

void	test_d_12(void)
{
	printf("Test_d => 12\n");
	printf("orig : %hd\n", (short int)SHRT_MAX);
	ft_printf("cust : %hd\n", (short int)SHRT_MAX);
	printf("\n");
}

void	test_d_13(void)
{
	printf("Test => 13\n");
	printf("orig : %d\n", INT_MIN);
	ft_printf("cust : %d\n", INT_MIN);
	printf("\n");
}

void	test_d_14(void)
{
	printf("Test => 14\n");
	printf("orig : %d\n", (int)-2147483648);
	ft_printf("cust : %d\n", (int)-2147483648);
	printf("\n");
}

// void	test_14(void)
// {
// 	printf("Test => 14\n");
// 	printf("orig : %hhhhd\n", -32768);
// 	ft_printf("cust : %hhhhd\n", -32768);
// 	printf("\n");
// }

// void	test_15(void)
// {
// 	printf("Test => 15\n");
// 	printf("orig : %-.012hd\n", -32768);
// 	ft_printf("cust : %-.012hd\n", -32768);
// 	printf("\n");
// }


//======================================================> conv_D

void	test_ld_01(void)
{
	printf("Test_D => 01\n");
	printf("orig : %D\n", 42);
	ft_printf("cust : %D\n", 42);
	printf("\n");
}

void	test_ld_02(void)
{
	printf("Test_D => 02\n");
	printf("orig : %D\n", UINT_MAX);
	ft_printf("cust : %D\n", UINT_MAX);
	printf("\n");
}

void	test_ld_03(void)
{
	printf("Test_D => 03\n");
	printf("orig : %D\n", INT_MIN);
	ft_printf("cust : %D\n", INT_MIN);
	printf("\n");
}

void	test_ld_04(void)
{
	printf("Test_D => 04\n");
	printf("orig : %lD\n", LONG_MIN);
	ft_printf("cust : %lD\n", LONG_MIN);
	printf("\n");
}

void	test_ld_05(void)
{
	printf("Test_D => 05\n");
	printf("orig : %hD\n", (short int)SHRT_MIN);
	ft_printf("cust : %hD\n", (short int)SHRT_MIN);
	printf("\n");
}

//======================================================> conv_x

void	test_x_01(void)
{
	printf("Test_x => 01\n");
	printf("orig : %x\n", 68);
	ft_printf("cust : %x\n", 68);
	printf("\n");
}

void	test_x_02(void)
{
	printf("Test_x => 02\n");
	printf("orig : %x\n", 6889);
	ft_printf("cust : %x\n", 6889);
	printf("\n");
}

void	test_x_03(void)
{
	printf("Test_x => 03\n");
	printf("orig : %x\n",	2147483647);
	ft_printf("cust : %x\n",	2147483647);
	printf("\n");
}

void	test_x_04(void)
{
	printf("Test_x => 04\n");
	printf("orig : %x\n",	2147483647);
	ft_printf("cust : %x\n",	2147483647);
	printf("\n");
}

// void	test_x_05(void)
// {
// 	printf("Test_x => 05\n");
// 	printf("orig : %x\n",	-2147483648);
// 	ft_printf("cust : %x\n",	-2147483648);
// 	printf("\n");
// }

void	test_x_06(void)
{
	printf("Test_x => 06\n");
	printf("orig : %#x\n",	2147);
	ft_printf("cust : %#x\n",	2147);
	printf("\n");
}

void	test_x_07(void)
{
	printf("Test_x => 07\n");
	printf("orig : %x\n",	-42);
	ft_printf("cust : %x\n",	-42);
	printf("\n");
}

// void	test_x_08(void)
// {
// 	printf("Test_x => 08\n");
// 	printf("orig : %x\n",	4294967295);
// 	ft_printf("cust : %x\n",	4294967295);
// 	printf("\n");
// }

// void	test_x_09(void)
// {
// 	printf("Test_x => 09\n");
// 	printf("orig : %hhx\n",	127);
// 	ft_printf("cust : %hhx\n",	127);
// 	printf("\n");
// }

// void	test_x_10(void)
// {
// 	printf("Test_x => 10\n");
// 	printf("orig : %hhx\n",	128);
// 	ft_printf("cust : %hhx\n",	128);
// 	printf("\n");
// }

// void	test_x_11(void)
// {
// 	printf("Test_x => 11\n");
// 	printf("orig : %hx\n",	256);
// 	ft_printf("cust : %hx\n",	256);
// 	printf("\n");
// }

// void	test_x_12(void)
// {
// 	printf("Test_x => 12\n");
// 	printf("orig : %hx\n",	32767);
// 	ft_printf("cust : %hx\n",	32767);
// 	printf("\n");
// }

// void	test_x_13(void)
// {
// 	printf("Test_x => 13\n");
// 	printf("orig : %hx\n",	32768);
// 	ft_printf("cust : %hx\n",	32768);
// 	printf("\n");
// }

// void	test_x_14(void)
// {
// 	printf("Test_x => 14\n");
// 	printf("orig : %hx\n",	2147483647);
// 	ft_printf("cust : %hx\n",	2147483647);
// 	printf("\n");
// }

// void	test_x_15(void)
// {
// 	printf("Test_x => 15\n");
// 	printf("orig : %llx\n",	2147483647);
// 	ft_printf("cust : %llx\n",	2147483647);
// 	printf("\n");
// }

void	test_x_16(void)
{
	char var = 42;
	printf("Test_x => 16\n");
	printf("orig : %x\n",	var);
	ft_printf("cust : %x\n",	var);
	printf("\n");
}

// void	test_x_17(void)
// {
// 	printf("Test_x => 17\n");
// 	printf("orig : %hhx\n",	4294967295);
// 	ft_printf("cust : %hhx\n",	4294967295);
// 	printf("\n");
// }

void	test_x_18(void)
{
	long long var = 9223372036854775807;
	printf("Test_x => 18\n");
	printf("orig : %llx\n",	var);
	ft_printf("cust : %llx\n",	var);
	printf("\n");
}

void	test_x_19(void)
{
	uintmax_t var = 9223372036854775807;
	printf("Test_x => 19\n");
	printf("orig : %jx\n",	var);
	ft_printf("cust : %jx\n",	var);
	printf("\n");
}

void	test_x_20(void)
{
	short var = 32767;
	printf("Test_x => 20\n");
	printf("orig : %hx\n", var);
	ft_printf("cust : %hx\n", var);
	printf("\n");
}

//======================================================> conv_s

void	test_s_01(void)
{
	printf("Test_s => 01\n");
	printf("orig : %s\n", "poney");
	ft_printf("cust : %s\n", "poney");
	printf("\n");
}

void	test_s_02(void)
{
	printf("Test_s => 02\n");
	printf("orig : %s\n" "4", "poney");
	ft_printf("cust : %s\n" "4", "poney");
	printf("\n");
}

void	test_s_03(void)
{
	printf("Test_s => 03\n");
	printf("orig : %s " "a1 " "a2 " "a3 " "\n", "poney");
	ft_printf("cust : %s " "b1 " "b2 " "b3 " "\n", "poney");
	printf("\n");
}

void	test_s_04(void)
{
	printf("Test_s => 04\n");
	printf("orig : %s\n", "poney truite");
	ft_printf("cust : %s\n", "poney truite");
	printf("\n");
}

void	test_s_05(void)
{
	printf("Test_s => 05\n");
	printf("orig : %4s\n", "poney truite");
	ft_printf("cust : %4s\n", "poney truite");
	printf("\n");
}

void	test_s_06(void)
{
	printf("Test_s => 06\n");
	printf("orig : %22s\n", "poney truite");
	ft_printf("cust : %22s\n", "poney truite");
	printf("\n");
}

//=====================================================> conv_S

void	test_ls_01(void)
{
	setlocale(LC_ALL, "");
	printf("Test_ls => 01\n");
	printf("orig : %S\n", L"chewing gum🤗 🤗 🤗 🤗\0");
	ft_printf("cust : %S\n", L"chewing gum🤗 🤗 🤗 🤗\0");
	printf("\n");
}

void	test_ls_02(void)
{
	setlocale(LC_ALL, "");
	printf("Test_ls => 02\n");
	printf("orig : %45S\n", L"chewing gum🤗 🤗 🤗 🤗\0");
	ft_printf("cust : %45S\n", L"chewing gum🤗 🤗 🤗 🤗\0");
	printf("\n");
}

void	test_ls_03(void)
{
	setlocale(LC_ALL, "");
	printf("Test_ls => 03\n");
	printf("orig : %5S\n", L"🤗");
	ft_printf("cust : %5S\n", L"🤗");
	printf("\n");
}

void	test_ls_04(void)
{
	setlocale(LC_ALL, "");
	printf("Test_ls => 04\n");
	printf("orig : %5S\n", L"©");
	ft_printf("cust : %5S\n", L"©");
	printf("\n");
}

void	test_ls_05(void)
{
	setlocale(LC_ALL, "");
	printf("Test_ls => 05\n");
	printf("orig : %5S\n", L"ᚙ");
	ft_printf("cust : %5S\n", L"ᚙ");
	printf("\n");
}

void	test_ls_06(void)
{
	setlocale(LC_ALL, "");
	printf("Test_ls => 06\n");
	printf("orig : %S\n", L"123456🤗");
	ft_printf("cust : %S\n", L"123456🤗");
	printf("\n");
}

//=====================================================> conv_C

void	test_lc_01(void)
{
	printf("Test_lc => 01\n");
	printf("orig : %C\n", 'G');
	ft_printf("cust : %C\n", 'G');
	printf("\n");
}

void	test_lc_02(void)
{
	printf("Test_lc => 02\n");
	printf("orig : %C\n", 'A');
	ft_printf("cust : %C\n", 'A');
	printf("\n");
}

void	test_lc_03(void)
{
	setlocale(LC_ALL, "");
	printf("Test_lc => 03\n");
	printf("orig : %C\n", L'©');
	ft_printf("cust : %C\n", L'©');
	printf("\n");
}

void	test_lc_04(void)
{
	setlocale(LC_ALL, "");
	printf("Test_lc => 04\n");
	printf("orig : %C\n", L'ߺ');
	ft_printf("cust : %C\n", L'ߺ');
	printf("\n");
}

void	test_lc_05(void)
{
	setlocale(LC_ALL, "");
	printf("Test_lc => 05\n");
	printf("orig : %C\n", L'ࠀ');
	ft_printf("cust : %C\n", L'ࠀ');
	printf("\n");
}

void	test_lc_06(void)
{
	setlocale(LC_ALL, "");
	printf("Test_lc => 06\n");
	printf("orig : %C\n", L'🤗');
	ft_printf("cust : %C\n", L'🤗');
	printf("\n");
}

//=====================================================> conv_p

void	test_p_01(void)
{
	int b = 234235;

	printf("Test_p => 01\n");
	printf("orig : %p\n", &b);
	ft_printf("cust : %p\n", &b);
	printf("\n");
}

void	test_p_02(void)
{
	int b = 234235;

	printf("Test_p => 02\n");
	printf("orig : %5p\n", &b);
	ft_printf("cust : %5p\n", &b);
	printf("\n");
}

void	test_p_03(void)
{
	int b = 234235;

	printf("Test_p => 03\n");
	printf("orig : %25p\n", &b);
	ft_printf("cust : %25p\n", &b);
	printf("\n");
}


int main(void)
{
	//Test_list________________________

	//conv_d
	printf("=======> Conv_d <=======\n");
	test_d_01();
	test_d_02();
	test_d_03();
	test_d_04();
	test_d_05();
	test_d_06();
	test_d_08();
	test_d_09();
	test_d_12();
	test_d_13();
	test_d_14();
	// test_15();

	printf("=======> Conv_D <=======\n");
	test_ld_01();
	test_ld_02();
	test_ld_03();
	test_ld_04();
	test_ld_05();


	// //conv x
	printf("=======> Conv_x <=======\n");
	test_x_01();
	test_x_02();
	test_x_04();
	// test_x_05();
	test_x_06();
	test_x_07();
	// test_x_08();
	// test_x_09();
	// test_x_10();
	// test_x_11();
	// test_x_12();
	// test_x_13();
	// test_x_14();
	// test_x_15();
	test_x_16();
	// test_x_17();
	test_x_18();
	test_x_19();
	test_x_20();

	//Start Conv_s
	printf("=======> Conv_s <=======\n");
	test_s_01();
	test_s_02();
	test_s_03();
	test_s_04();
	test_s_05();
	test_s_06();

	//Start conv_lc
	printf("=======> Conv_lc <=======\n");
	test_lc_01();
	test_lc_02();
	test_lc_03();
	test_lc_04();
	test_lc_05();
	test_lc_06();
	//test_lc_07();

	//Start conv_ls
	printf("=======> Conv_ls <=======\n");
	test_ls_01();
	test_ls_02();
	test_ls_03();
	test_ls_04();
	test_ls_05();
	test_ls_06();

	//Start conv_p
	printf("=======> Conv_p <=======\n");
	test_p_01();
	test_p_02();
	test_p_03();
	// test_p_04();
	// test_p_05();
	// test_p_06();


	//test de merde

	// printf("printf : %x\n", 9223372036854775807);
	// ft_printf("ft_printf : %x\n", 9223372036854775807);
	// printf("printf : %x\n", -9223372036854775807);
	// ft_printf("ft_printf : %x\n", -9223372036854775807);
	// printf("printf : %x\n", 18446744073709551615);
	// ft_printf("ft_printf : %x\n", 18446744073709551615);
	// printf("printf : %hx\n", 18446744073709551615);
	// ft_printf("ft_printf : %hx\n", 18446744073709551615);
	// int i = 0;
	// char buffer[10000];
	// printf("orig hexa = %x\n", 42);
	// printf("orig hexa = %x\n", -42);
	// printf("orig hexa = %x\n", 87455477);
	// printf("hexa test = %x\n", 0x15f9);
	// printf("hexa test = %x\n", -5625);
	// printf("hexa test ll = %llx\n", INT_MAX+1);
	//print_binary(0);
	//ft_printf("cust = %d\n", INT_MAX);
	// printf("sizeof %lld\n", sizeof(uintmax_t));
	// printf("test printf llx %llx\n", -9223372036854775806);
	// printf("test printf llx %llx\n", -1000000000000000000);
	// printf("test printf llx %lld\n", 0xf21f494c589c0000);
	// printf("test printf llx %lld\n", 17446744073709552000);
	// printf("test printf x %x\n", INT_MIN);
	// printf("test printf llx %llx\n", INT_MIN);
	// printf("test printf x %x\n", INT_MAX + 5);
	// printf("test printf llx %llx\n", INT_MAX * INT_MAX);
	// printf("test printf unsigned llx %llx\n", 4294967295);
	// printf("test printf unsigned llx %llx\n", 9223372036854775807);
	// printf("\n");
	// printf("test printf 2147483647 %x\n", 2147483647);
	// printf("test printf %x\n\n", -2147483648);
	// printf("test printf %u\n", 4294967295 - 88);
	// printf("test printf %d\n", 4294967295 - 87);
	// printf("test printf %x\n", -88);
	// printf("test printf %d\n\n", 4294967208);
	// printf("test printf llx %llx\n", 18446744073709551615);
	// printf("test printf llx %llx\n", 4294967295);
	// printf("test printf llx %x\n", 4294967295);
	// printf("test printf llx %llx\n", 4294967295 - 87);
	// printf("test printf llx %llx\n", -88);
	// printf("test printf hexa llx %lld\n", 0x8000000000000000);
	// printf("test printf hexa llx 0xFFFFFFFFFFFFFFFF == %lld\n", 0xFFFFFFFFFFFFFFFF);
	// printf("test printf hexa llx 0xFFFFFFFFFFFFFFFE == %lld\n", 0xFFFFFFFFFFFFFFFE);
	// printf("test printf hexa llx 9223372036854775807 == 0x%llx\n", 9223372036854775907);
	// printf("test printf hexa llx test == %lld\n", 0x7FFFFFFFFFFFFFFF );
	// printf("test printf hexa lld test == %lld   cast in signed long long\n", 0x8000000000000000 );
	// printf("test printf hexa lld test == %lld   cast in signed long long\n", 0x0000000080000000 );
	// printf("test printf hexa lld test == %d   cast in signed int\n\n", 0x80000000 );
	//
	// printf("test printf hexa x test == 0x%x \n", 4294967296 );
	// printf("test x test == 0x%jx \n", 4294967296 );
	// printf("test x test == 0x%llx \n", 2147483649 );
	// printf("test x test == 0x%lld \n", 0x7FFFFFFFFFFFFFFF);
	// printf("test lld test == 0x%lld \n", 18446744073709551615);
	// printf("test u test == %llu \n", 0x8000000000000000);
	//
	// ft_printf("test ft d == %d\n", 2147483647);
	// ft_printf("test ft d == %d\n", 2);
	// ft_printf("test ft d == %d\n", 2147483680);
	// ft_printf("\n");
	//
	// ft_printf("test ft d 2 == %d\n\n", 2);
	// ft_printf("test ft d 2147483647 == %d\n", 2147483647);
	// ft_printf("test ft d 4294967296 == %d\n", 4294967296);
	// printf("printf dif d 4294967296 == %d\n\n", 4294967296);
	// ft_printf("test ft hd 4294967296 == %hd\n", 4294967296);
	// printf("printf dif hd 4294967296 == %hd\n", 4294967296);
	// ft_printf("test ft hd 4294 == %hd\n", 4294222);
	// printf("printf dif hd 4294 == %hd\n", 4294222);
	//ft_printf("test ft d 9223372036854775807 == %d\n", 9223372036854775807);
	//printf("printf dif d 9223372036854775807 == %d\n", 9223372036854775807);


	//ft_printf("cust = %d\n", UINT_MAX);
	// ft_printf("cust = %d\n\n", INT_MAX);
	//ft_printf("cust = %s\n", ft_itoa_printf(88, 16));

//	ft_printf("cust = %s\n", ft_itoa_printf(-88, 16));

	// printf("\n");
	// printf("When printf cast in ll   %x\n", -2147483648);
	// printf("When printf cast in ll   %x\n", -2147483649);
	// printf("When printf cast in ll   %llx\n", -2147483649);
	// printf("When printf cast in ll   %llx\n", -2147483647);


	// ft_printf("ft_printf %....12.6d\n", 1234);
	// printf("printf    %....12.6d\n", 1234);
	// printf("\n");
	// ft_printf("ft_printf %*3$d\n", 3, 5, 6, 7);
	// printf("printf %*3$d\n", 3, 5, 6, 7);
	// printf("\n");
	// ft_printf("ft_printf_star %.**#****d\n", 4, 5, 6, 7, 10, 25, 8, 7);
	// printf("printf_star %.**#****d\n", 4, 5, 6, 7, 10, 25, 8, 7);
	// printf("\n");
	// ft_printf("test cast h %hhd\n", 222);
	// printf("###$ printf test cast %hhd\n", 222);
	// ft_printf("test cast h %hd\n", 678912345);
	// ft_printf("test cast hh %hhd\n", 678912345);
	// printf("###$ printf test cast %hhd\n", 222);
	// ft_printf("test cast hh %hhd   \n", 222);
	// ft_printf("test cast -2147483648 to hhd %hhd \n", -2147483648);
	// ft_printf("test cast -2147483648 %d \n", -2147483648);
	// ft_printf("test cast bit %d \n", 1);
	// ft_printf("test cast bit %d \n", 0);
	// ft_printf("test cast bit %hhd \n", 256);
	// printf("printf cast bit %hhd \n", 256);
	// ft_printf("test cast bit %hd \n", 256000);
	// printf("printf cast bit %hd \n", 256000);
	// printf("\n");
	// ft_printf("test cast bit %d \n", 256000000);
	// ft_printf("test cast bit %d \n", 256000000);

	//printf("test itoa base = %s\n", ft_itoa_base(-2222, 8));
	//printf("###$ printf test cast %hhd\n", -2147483648);

	//End________________
	// ft_printf("Oldboy\n");
	// ft_printf("Oldboy Nemo\n");
	// ft_printf("Oldboy Nemo %d\n", 587);
	// ft_printf("Digit %d\n", 7);
	// ft_printf("Pokemon %s\n", "Bleu");
	// ft_printf("Sopalin 0x5BFB %#x\n", 23547);
	// ft_printf("Soja %s coccinelle %d\n", "perime", 53);
	// ft_printf("Egon %%%%%%%%%%\n");
	// ft_printf("Audio %c\n");
	// ft_printf("Bras %S\n");
	// ft_printf("Mouton %D\n", 87);
	// ft_printf("flag 0 false : %#010x\n", 847);
	// ft_printf("flag 0# : %#010x\n", 847);
	// ft_printf("flag 0# : %#010x_%#010x\n", 847, 412);
	// ft_printf("d flag 0# : %#010d\n", 235);
	// ft_printf("x flag 0# : %#010x\n", 235);
	// ft_printf("x flag 02 : %02x\n", 235);
	// ft_printf("x flag 0#02 : %#02x\n", 235);
	// ft_printf("x flag -0# : %-#010x\n", 235);
	// ft_printf("x flag -0# : %-#010x\n", 235);
	// printf("x flag -0# : %-#010x\n", 235);
	// ft_printf("x flag 0# : %#010x\n", 235);

	// printf("x flag printf -0# : %-#010x\n", 235);
	// printf("printf superiorite .*/.2$ %..*.3..*10$***.12d\n", 4, 87, 8, 12, 35, 17, 69, 57);
	//printf("d flag -0# : %-#010d\n", 235);
	//printf("d flag -0# : %-#010d\n", 235);
	// printf("flag 0 : %#0010x\n", 847);
	// printf("flag 0 : %#003x\n", 847);

	//printf("courgette %1  100   120  10d\n", 87);
	// printf("after ft_printf\n");
	// printf("% l   bordel\n");
	// printf("flag 0 : %#010x\n", 847);
	//
	// ft_printf("Sirop de mandarine%d\nfichtre %d bonnet %d\n", 132, 456, 789);
	// ft_printf("Multiple %d %d %d conversion\n");

	// ft_printf("Bilbo %%dkkkk\n");
	// printf("Bilbo %%dkkkk\n");
	// printf("\n");
	// ft_printf("L abeille coule %llllllbob\n");
	// ft_printf ("my  % % %d%\n", 42);
	// ft_printf ("my  % % %d%\n", 42);
	// printf("\n");
	// printf ("printf %%%d%", 42);
	// printf("\n");
	// printf("machin" "%d %d", 2, 2);
	// printf("##$  lapin  %%%d", 87);
	// printf("printf superiorite .*/.2$ %..*.3..*10$***.12d\n", 4, 87, 8, 12, 35, 17, 69, 57);

	// printf("printf %.6d\n", 874);
	// printf("printf %*d\n", 6,42,23);
	// printf("printf %*2$d\n", 10,5,23);
	//
	// printf("printf intmax_t %ju\n", 18446744073709551615, 12, 9);

	// printf("bob %.2s\n", "krevette"); // precision
	// printf("bob %2s\n", "krevette"); // precision
	//
	// printf("bob %5s\n", "krevette");
	// printf("bob %.*s\n", 2, "krevette");
	// printf("bob %*s\n", 40, "krevette");

	/*Ok donc la differene entre precision et largeur c est le ".", avec le point dans les str on crop, sans c est une taille minimum remplit de 0 ou d espace...
	*/

	// char happy[] = { 0xe2, 0x98, 0xba};
	// write(1, happy, 3);
	// char happy2[] = {227, 130, 166};
	// write(1, happy2, 3);
	// char happy3[] = {227, 131, 176};
	// write(1, happy3, 3);
	//char happy4[] = {240, 144, 166, 128};
	//write(1, happy4, 4);
	// char happy5[] = {225, 175, 164};
	// write(1, happy5, 3);
	// write(1, " ", 1);
	// char happy6[] = {226, 157, 132};
	// write(1, happy6, 3);
	// char happy7[] = {224, 182, 163};
	// write(1, " ", 1);
	// write(1, happy7, 3);
	// write(1, " ", 1);
	// write(1, " ", 1);
	// printf("%c%c\n", 0xC0 | (536 >> 6), 0x80 | (536 & 0x3f));
	// printf("%c\n", 0x80 | (536 & 0x3f));
	// printf("%c%c\n", 0xC0 | (536 >> 6), 0x80 | (536 & 0x3f));
	// printf("%c%c\n", 0x80 | (536 & 0x3f), 0xC0 | (536 >> 6));
	// printf("%c%c\n", 0xC0, 0x80);

	// printf("fuck %c%c\n", 0xC8, 0x18);
	// printf("i want you %C%C%C\n", 0xE2, 0xBB, 0x86);
	//printf("tac %c%c%c", 0xE2, 0x98); error
	// wchar_t test[3];
	//
	// test[0] = 0xE2;
	// test[1] = 0x82;
	// test[2] = 0xAC;


	//printf("Grim Fandango %S\n", 0xE2);
	// printf("%lc\n", (wint_t)536);
	// printf("\n");

	//
	// 0xC0 == 1100 0000;
	// 536 >> 6 == 0000 0000 1000;
	//
	// 0000 0000 1000   OR
	//      1100 0000
    // 0000 1100 1000
	//
	//
	// 0x80 == 1000 0000
	//
	// 0x3f == 0011 1111
	//
	// 0010 0001 1000 	AND
	// 0000 0011 1111
	// 0000 0001 1000
	//
	//
	// 0000 1100 1000 == 200  == 0xC8
	// 0000 0001 1000 == 24   == 0x18
	//
	//
	// 1100 0000
	// 1000 0000
	//
	// 0010 0001 1000
	// 0010 0001 1000
	//         xxxxxx
	// 0000 0000 1000
	// 0000 0000 1000
	//
	// a = 0xf == 1111;
	// b = a >> 3 == 0001;
	// a = b << 4 == 0001 0000;

	// if the lower bit is 0 its pair else if it is 1 its impair
	//
	// printf("%c\n", 'e');
	// printf("%C\n", 'e');


	//wchar_t z = 0xF0908D88;
	//printf("test = %C\n", z);
	// setlocale(LC_ALL, "");
	// printf("bite %C\n", L'é');
	// printf("bite %C%C%C\n", 0xE2, 0xBB, 0x86);
	// printf("bite %c%c\n", 0b11000010, 0b10101001);
	// printf("hook %C%C\n", 0xC2, 0xA9);
	//
	// wchar_t a;
	// wchar_t b;
	// wchar_t c;
	// wchar_t d;
	//
	// a = 0;
	// b = 0;
	// c = 0;
	// d = 0;
	//
	// a = 49833;
	// b = 580;
	// printf("castor %x\n", a);
	// printf("castor2 %i\n", x);
	//printf("%lu\n", sizeof(wchar_t));
	// ft_putchar(((b >> 6) & 0x1F) | 0xC0);
	// ft_putchar((b & 0x3F) | 0x80);
	//
	// int ko = 10052;
	// ft_putchar(' ');
	// ft_putchar(((ko >> 12) & 0xF) | 0xE0);
	// ft_putchar(((ko >> 6) & 0x3F) | 0x80);
	// ft_putchar((ko & 0x3F) | 0x80);
	// ft_putchar(' ');
	// b = a >> 8;
	// a = 49833;
	// c = a << 24;
	// d = c >> 24;


	// wchar_t	lune;

	// lune = L'©';

	// ft_putnbr(mal);
	// printf("ICI%C\n", mal);

	// write(1, &lune, 1);
	// write(1, &lune, 1);
	// write(1, &lune, 1);


	// lune = 0xC2;
	// write(1, &lune, 1);
	// lune = 0xA9;
	// write(1, &lune, 1);

	//printf("Cup %b\n", mordor);
	//mordor = 49833;
	// printf("%s\n", ft_itoa_printf(mordor, 2));
	//mordor = mordor >> 8;
	//printf("Cup %x\n", mordor);

	//printf("%C" L'猫');

	// mordor = mordor >> 8;
	// printf("Cup %x\n", mordor);

	return (0);
}
