/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_proto.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:53:56 by lchety            #+#    #+#             */
/*   Updated: 2017/02/17 19:02:25 by lchety           ###   ########.fr       */
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

//======================================================> conv_s

void	test_s_01(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 01\n");
	ret1 = printf("orig : %s\n", "poney");
	ret2 = ft_printf("cust : %s\n", "poney");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_s_02(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 02\n");
	ret1 = printf("orig : %s\n" "4", "poney");
	ret2 = ft_printf("cust : %s\n" "4", "poney");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_s_03(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 03\n");
	ret1 = printf("orig : %s " "a1 " "a2 " "a3 " "\n", "poney");
	ret2 = ft_printf("cust : %s " "b1 " "b2 " "b3 " "\n", "poney");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_s_04(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 04\n");
	ret1 = printf("orig : %s\n", "poney truite");
	ret2 = ft_printf("cust : %s\n", "poney truite");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_s_05(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 05\n");
	ret1 = printf("orig : %4s\n", "poney truite");
	ret2 = ft_printf("cust : %4s\n", "poney truite");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_s_06(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 06\n");
	ret1 = printf("orig : %22s\n", "poney truite");
	ret2 = ft_printf("cust : %22s\n", "poney truite");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_s_07(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 07\n");
	printf("orig : %.s\n", "poney truite");
	ft_printf("cust : %.s\n", "poney truite");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_s_08(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 08\n");
	printf("orig : %.4s\n", "poney truite");
	ft_printf("cust : %.4s\n", "poney truite");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_s_09(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 09\n");
	printf("orig : %.*s\n", 5, "poney truite");
	ft_printf("cust : %.*s\n", 5, "poney truite");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}



void	test_s_11(void)
{
	size_t a = LONG_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_s => 11\n");
	ret1 = printf("orig : %zd\n", a);
	ret2 = ft_printf("cust : %zd\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
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

void	test_ls_07(void)
{
	int ret1 = 0;
	int ret2 = 0;

	setlocale(LC_ALL, "");
	printf("Test_ls => 07\n");
	ret1 = printf("orig : %S\n", L"🤗🤗🤗🤗");
	ret2 = ft_printf("cust : %S\n", L"🤗🤗🤗🤗");
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}


//======================================================> conv_d

void	test_d_01(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 01\n");
	ret1 = printf("orig : %d\n", 42);
	ret2 = ft_printf("cust : %d\n", 42);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_02(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 02\n");
	ret1 = printf("orig : %d\n", INT_MIN);
	ret2 = ft_printf("cust : %d\n", INT_MIN);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_03(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 03\n");
	ret1 = printf("orig : %d\n", INT_MAX);
	ret2 = ft_printf("cust : %d\n", INT_MAX);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_04(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 04\n");
	ret1 = printf("orig : %.8d\n", 25);
	ret2 = ft_printf("cust : %.8d\n", 25);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_05(void)
{
	long a = LONG_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 05\n");
	ret1 = printf("orig : %ld\n", a);
	ret2 = ft_printf("cust : %ld\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_06(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 06\n");
	ret1 = printf("orig : %.08d\n", 25);
	ret2 = ft_printf("cust : %.08d\n", 25);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_07(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 07\n");
	ret1 = printf("orig : %8d\n", -2525);
	ret2 = ft_printf("cust : %8d\n", -2525);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_08(void)
{
	char a = CHAR_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 08\n");
	ret1 = printf("orig : %hhd\n", a);
	ret2 = ft_printf("cust : %hhd\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_09(void)
{
	char a = CHAR_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 09\n");
	ret1 = printf("orig : %hhd\n", a);
	ret2 = ft_printf("cust : %hhd\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_10(void)
{
	size_t a = INT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 10\n");
	ret1 = printf("orig : %zd\n", a);
	ret2 = ft_printf("cust : %zd\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_11(void)
{
	size_t a = INT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 11\n");
	ret1 = printf("orig : %12zd\n", a);
	ret2 = ft_printf("cust : %12zd\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_12(void)
{
	short a = SHRT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 12\n");
	ret1 = printf("orig : %hd\n", a);
	ret2 = ft_printf("cust : %hd\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}


void	test_d_13(void)
{
	short a = SHRT_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 13\n");
	ret1 = printf("orig : %hd\n", a);
	ret2 = ft_printf("cust : %hd\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_14(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 14\n");
	ret1 = printf("orig : %.12d\n", 50);
	ret2 = ft_printf("cust : %.12d\n", 50);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_15(void)
{
	short a = 126;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 15\n");
	ret1 = printf("orig : %-.012hd\n", a);
	ret2 = ft_printf("cust : %-.012hd\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_16(void)
{
	int a = 123456789;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 16\n");
	ret1 = printf("orig : %.4d\n", a);
	ret2 = ft_printf("cust : %.4d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_17(void)
{
	int a = 123456789;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 17\n");
	ret1 = printf("orig : %.d\n", a);
	ret2 = ft_printf("cust : %.d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_18(void)
{
	int a = 42;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 18\n");
	ret1 = printf("orig : %-.12d\n", a);
	ret2 = ft_printf("cust : %-.12d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_19(void)
{
	int a = -42;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 19\n");
	ret1 = printf("orig : %-50.12d\n", a); //return stupid
	ret2 = ft_printf("cust : %-50.12d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_20(void)
{
	int a = 42;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 20\n");
	ret1 = printf("orig : %.*d\n", 5, a);
	ret2 = ft_printf("cust : %.*d\n", 5, a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_21(void)
{
	int a = -42;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 21\n");
	ret1 = printf("orig : %.*d\n", 5, a);
	ret2 = ft_printf("cust : %.*d\n", 5, a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_22(void)
{
	int a = -2525;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 22\n");
	ret1 = printf("orig : %10.5d\n", a);
	// ret1 = printf("orig : %10d\n", a);
	ret2 = ft_printf("cust : %10.5d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_23(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 23\n");
	ret1 = printf("orig : %.8d\n", 585);
	ret2 = ft_printf("cust : %.8d\n", 585);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_24(void)
{
	int a = -42;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 24\n");
	ret1 = printf("orig : %020.10d\n", a); //return stupid
	ret2 = ft_printf("cust : %020.10d\n", a);
	//width of 50, justify left precision of 12
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_25(void)
{
	int a = -12345678;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 25\n");
	ret1 = printf("orig : %012.1d\n", a); //return stupid
	ret2 = ft_printf("cust : %012.1d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_26(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 26\n");
	ret1 = printf("orig : %-.8d\n", 585);
	ret2 = ft_printf("cust : %-.8d\n", 585);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_27(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 27\n");
	ret1 = printf("orig : %-8d\n", 585);
	ret2 = ft_printf("cust : %-8d\n", 585);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_28(void)
{
	int a = -54321;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 28\n");
	ret1 = printf("orig : %10d\n", a);
	ret2 = ft_printf("cust : %10d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_29(void)
{
	int a = -54321;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 29\n");
	ret1 = printf("orig : %.10d\n", a);
	ret2 = ft_printf("cust : %.10d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_d_30(void)
{
	int a = -54321;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_d => 30\n");
	ret1 = printf("orig : %010d\n", a);
	ret2 = ft_printf("cust : %010d\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}



//======================================================> conv_D

void	test_ld_01(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 01\n");
	ret1 = printf("orig : %D\n", 42);
	ret2 = ft_printf("cust : %D\n", 42);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_02(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 02\n");
	ret1 = printf("orig : %D\n", UINT_MAX);
	ret2 = ft_printf("cust : %D\n", UINT_MAX);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_03(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 03\n");
	ret1 = printf("orig : %D\n", INT_MIN);
	ret2 = ft_printf("cust : %D\n", INT_MIN);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_04(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 04\n");
	ret1 = printf("orig : %D\n", INT_MAX);
	ret2 = ft_printf("cust : %D\n",INT_MAX);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_05(void)
{
	short a = SHRT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 05\n");
	ret1 = printf("orig : %hD\n", a);
	ret2 = ft_printf("cust : %hD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_06(void)
{
	short a = SHRT_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 06\n");
	ret1 = printf("orig : %hD\n", a);
	ret2 = ft_printf("cust : %hD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_07(void)
{
	unsigned short a = USHRT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 07\n");
	ret1 = printf("orig : %hD\n", a);
	ret2 = ft_printf("cust : %hD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_08(void)
{
	char a = CHAR_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 08\n");
	ret1 = printf("orig : %hhD\n", a);
	ret2 = ft_printf("cust : %hhD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_09(void)
{
	char a = CHAR_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 09\n");
	printf("orig : %hhD\n", a);
	ft_printf("cust : %hhD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_10(void)
{
	unsigned char a = UCHAR_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 10\n");
	printf("orig : %hhD\n", a);
	ft_printf("cust : %hhD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_11(void)
{
	long long a = LONG_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 11\n");
	printf("orig : %llD\n", a);
	ft_printf("cust : %llD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_12(void)
{
	long a = LONG_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 12\n");
	printf("orig : %lD\n", a);
	ft_printf("cust : %lD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_13(void)
{
	intmax_t a = ULONG_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 13\n");
	printf("orig : %jD\n", a);
	ft_printf("cust : %jD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_14(void)
{
	uintmax_t a = ULONG_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 14\n");
	printf("orig : %jD\n", a);
	ft_printf("cust : %jD\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_ld_15(void)
{
	uintmax_t a = ULONG_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_D => 15\n");
	printf("orig : %.*jD\n", 5, a);
	ft_printf("cust : %.*jD\n", 5, a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

//======================================================> conv_i

void 	test_i_01(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = INT_MAX;

	printf("Test_i => 01\n");
	ret1 = printf("orig : %i\n", a);
	ret2 = ft_printf("cust : %i\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_i_02(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = INT_MIN;

	printf("Test_i => 02\n");
	ret1 = printf("orig : %i\n", a);
	ret2 = ft_printf("cust : %i\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_i_03(void)
{
	int ret1 = 0;
	int ret2 = 0;
	short a = SHRT_MAX;

	printf("Test_i => 03\n");
	ret1 = printf("orig : %hi\n", a);
	ret2 = ft_printf("cust : %hi\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_i_04(void)
{
	int ret1 = 0;
	int ret2 = 0;
	short a = SHRT_MIN;

	printf("Test_i => 04\n");
	ret1 = printf("orig : %hi\n", a);
	ret2 = ft_printf("cust : %hi\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_i_05(void)
{
	int ret1 = 0;
	int ret2 = 0;
	char a = CHAR_MAX;

	printf("Test_i => 05\n");
	ret1 = printf("orig : %hhi\n", a);
	ret2 = ft_printf("cust : %hhi\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_i_06(void)
{
	int ret1 = 0;
	int ret2 = 0;
	long a = INT_MAX;


	printf("Test_i => 06\n");
	ret1 = printf("orig : %li\n", a);
	ret2 = ft_printf("cust : %li\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_i_07(void)
{
	int ret1 = 0;
	int ret2 = 0;
	unsigned long a = UINT_MAX;


	printf("Test_i => 07\n");
	ret1 = printf("orig : %li\n", a);
	ret2 = ft_printf("cust : %li\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_i_08(void)
{
	int ret1 = 0;
	int ret2 = 0;
	long long a = LONG_MAX;

	printf("Test_i => 08\n");
	ret1 = printf("orig : %lli\n", a);
	ret2 = ft_printf("cust : %lli\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}


/*
void	test_ld_08(void)
{
	char a = MAX;

	printf("Test_D => 07\n");
	printf("orig : %hhD\n", a);
	ft_printf("cust : %hD\n", a);
	printf("\n");
}

void	test_ld_06(void)
{
	short a = SHRT_MIN;
	printf("Test_D => 06\n");
	printf("orig : %hD\n", a);
	ft_printf("cust : %hD\n", a);
	printf("\n");
}
*/

//======================================================> conv_o

void 	test_o_01(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = INT_MAX;

	printf("Test_o => 01\n");
	ret1 = printf("orig : %o\n", a);
	ret2 = ft_printf("cust : %o\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_o_02(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = INT_MIN;

	printf("Test_o => 02\n");
	ret1 = printf("orig : %o\n", a);
	ret2 = ft_printf("cust : %o\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_o_03(void)
{
	int ret1 = 0;
	int ret2 = 0;
	short a = SHRT_MAX;

	printf("Test_o => 03\n");
	ret1 = printf("orig : %ho\n", a);
	ret2 = ft_printf("cust : %ho\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_o_04(void)
{
	int ret1 = 0;
	int ret2 = 0;
	char a = CHAR_MAX;

	printf("Test_o => 04\n");
	ret1 = printf("orig : %10hho\n", a);
	ret2 = ft_printf("cust : %10hho\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_o_05(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = INT_MAX;

	printf("Test_o => 05\n");
	ret1 = printf("orig : %.4o\n", a);
	ret2 = ft_printf("cust : %.4o\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_o_06(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = 42;

	printf("Test_o => 06\n");
	ret1 = printf("orig : %.12o\n", a);
	ret2 = ft_printf("cust : %.12o\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_o_07(void)
{
	int ret1 = 0;
	int ret2 = 0;
	long long a = LONG_MAX;

	printf("Test_o => 07\n");
	ret1 = printf("orig : %.12llo\n", a);
	ret2 = ft_printf("cust : %.12llo\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_o_08(void)
{
	int ret1 = 0;
	int ret2 = 0;
	long long a = LONG_MIN;

	printf("Test_o => 08\n");
	ret1 = printf("orig : %llo\n", a);
	ret2 = ft_printf("cust : %llo\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_o_09(void)
{
	int ret1 = 0;
	int ret2 = 0;
	intmax_t a = ULONG_MAX;

	printf("Test_o => 09\n");
	ret1 = printf("orig : %.30jo\n", a);
	ret2 = ft_printf("cust : %.30jo\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}


//======================================================> conv_O
void 	test_lo_01(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = 42;

	printf("Test_O => 01\n");
	ret1 = printf("orig : %O\n", a);
	ret2 = ft_printf("cust : %O\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_lo_02(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = INT_MAX;

	printf("Test_O => 02\n");
	ret1 = printf("orig : %O\n", a);
	ret2 = ft_printf("cust : %O\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_lo_03(void)
{
	int ret1 = 0;
	int ret2 = 0;
	int a = INT_MIN;

	printf("Test_O => 03\n");
	ret1 = printf("orig : %O\n", a);
	ret2 = ft_printf("cust : %O\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void 	test_lo_04(void)
{
	int ret1 = 0;
	int ret2 = 0;
	unsigned int a = UINT_MAX;

	printf("Test_O => 04\n");
	ret1 = printf("orig : %O\n", a);
	ret2 = ft_printf("cust : %O\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}


//======================================================> conv_x

void	test_x_01(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 01\n");
	ret1 = printf("orig : %x\n", 42);
	ret2 = ft_printf("cust : %x\n", 42);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_02(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 02\n");
	ret1 =printf("orig : %x\n", 6889);
	ret2 = ft_printf("cust : %x\n", 6889);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_03(void)
{
	int a = INT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 03\n");
	ret1 = printf("orig : %x\n", a);
	ret2 = ft_printf("cust : %x\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_04(void)
{
	int a = INT_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 04\n");
	ret1 = printf("orig : %x\n",	a);
	ret2 = ft_printf("cust : %x\n",	a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_05(void)
{
	int a = INT_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 05\n");
	ret1 = printf("orig : %3x\n", a);
	ret2 = ft_printf("cust : %3x\n",	a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_06(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 06\n");
	ret1 = printf("orig : %#x\n", 2147);
	ret2 = ft_printf("cust : %#x\n", 2147);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_07(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 07\n");
	ret1 = printf("orig : %x\n",	-42);
	ret2 = ft_printf("cust : %x\n",	-42);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_08(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 08\n");
	ret1 = printf("orig : %-15x\n", 542);
	ret2 = ft_printf("cust : %-15x\n", 542);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_09(void)
{
	char a = 127;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 09\n");
	ret1 = printf("orig : %hhx\n", a);
	ret2 = ft_printf("cust : %hhx\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_10(void)
{
	char a = 128;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 10\n");
	ret1 = printf("orig : %hhx\n", a);
	ret2 = ft_printf("cust : %hhx\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_11(void)
{
	short a = SHRT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 11\n");
	ret1 = printf("orig : %hx\n", a);
	ret2 = ft_printf("cust : %hx\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_12(void)
{
	short a = SHRT_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 12\n");
	ret1 = printf("orig : %hx\n", a);
	ret2 = ft_printf("cust : %hx\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_13(void)
{
	int a = 12345;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 13\n");
	ret1 = printf("orig : %.10x\n", a);
	ret2 = ft_printf("cust : %.10x\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_14(void)
{
	int a = 12345;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 14\n");
	ret1 = printf("orig : %18.10x\n", a);
	ret2 = ft_printf("cust : %18.10x\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_15(void)
{
	int a = 12345;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 15\n");
	ret1 = printf("orig : %-20.10x|\n", a);
	ret2 = ft_printf("cust : %-20.10x|\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_16(void)
{
	int a = 12345;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 16\n");
	ret1 = printf("orig : %#20.10x|\n", a);
	ret2 = ft_printf("cust : %#20.10x|\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_17(void)
{
	int a = 12345;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 17\n");
	ret1 = printf("orig : %#2.2x\n", a);
	ret2 = ft_printf("cust : %#2.2x\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

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

void	test_x_21(void)
{
	short var = SHRT_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 21\n");
	ret1 = printf("orig : %#hx\n", var);
	ret2 = ft_printf("cust : %#hx\n", var);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_22(void)
{
	int var = 256;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 22\n");
	ret1 = printf("orig : %#.10x\n", var);
	ret2 = ft_printf("cust : %#.10x\n", var);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_23(void)
{
	int var = 256;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 23\n");
	ret1 = printf("orig : %#10x\n", var);
	ret2 = ft_printf("cust : %#10x\n", var);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_24(void)
{
	size_t var = INT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 24\n");
	ret1 = printf("orig : %zx\n", var);
	ret2 = ft_printf("cust : %zx\n", var);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_25(void)
{
	size_t var = INT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 25\n");
	ret1 = printf("orig : %#010zx\n", var);
	ret2 = ft_printf("cust : %#010zx\n", var);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}


void	test_x_26(void)
{
	size_t var = INT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 26\n");
	ret1 = printf("orig : %#011zx\n", var);
	ret2 = ft_printf("cust : %#011zx\n", var);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_x_27(void)
{
	size_t var = INT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_x => 27\n");
	ret1 = printf("orig : %020.1zx\n", var);
	ret2 = ft_printf("cust : %020.1zx\n", var);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

//=====================================================> conv_X

void	test_lx_01(void)
{
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_X => 01\n");
	ret1 = printf("orig : %X\n", INT_MAX);
	ret2 = ft_printf("cust : %X\n", INT_MAX);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_lx_02(void)
{
	int a = INT_MIN;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_X => 02\n");
	ret1 = printf("orig : %X\n", a);
	ret2 = ft_printf("cust : %X\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_lx_03(void)
{
	short a = SHRT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_X => 03\n");
	ret1 = printf("orig : %hX\n", a);
	ret2 = ft_printf("cust : %hX\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
	printf("\n");
}

void	test_lx_04(void)
{
	unsigned int a = UINT_MAX;
	int ret1 = 0;
	int ret2 = 0;

	printf("Test_X => 04\n");
	ret1 = printf("orig : %#X\n", a);
	ret2 = ft_printf("cust : %#X\n", a);
	printf("\n");
	printf("ret_orig : %d\n", ret1);
	printf("ret_cust : %d\n", ret2);
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

//=====================================================> mutant_test

void 	mutant_01(void)
{
	printf("Mutant_test => 01\n");
	printf("*%5%*\n");
	ft_printf("*%5%*\n");
	printf("\n");
}

void 	mutant_02(void)
{
	printf("Mutant_test => 02\n");
	printf("*%-5%*\n");
	ft_printf("*%-5%*\n");
	printf("\n");
}

void 	mutant_03(void)
{
	printf("Mutant_test => 03\n");
	//printf("%   %", "test");
	//ft_printf("%   %", "test");
	printf("\n");
}

void 	mutant_04(void)
{
	printf("Mutant_test => 04\n");
	//ft_printf("%069999999d\n", 42);
	printf("\n");
}


void	test_s(void)
{
	test_s_01();
	test_s_02();
	test_s_03();
	test_s_04();
	test_s_05();
	test_s_06();
	test_s_07();
	test_s_08();
	test_s_09();
}

void	test_ls(void)
{
	test_ls_01();
	test_ls_02();
	test_ls_03();
	test_ls_04();
	test_ls_05();
	test_ls_06();
	test_ls_07();
}

void 	test_d(void)
{
	test_d_01();
	test_d_02();
	test_d_03();
	test_d_04();
	test_d_05();
	test_d_06();
	test_d_07();
	test_d_08();
	test_d_09();
	test_d_10();
	test_d_11();
	test_d_12();
	test_d_13();
	test_d_14();
	test_d_15();
	test_d_16();
	test_d_17();
	test_d_18();
	test_d_19();
	test_d_20();
	test_d_21();
	test_d_22();
	test_d_23();
	// test_d_24();
	// test_d_25();
	// test_d_26();
	// test_d_27();
	// test_d_28();
	// test_d_29();
	// test_d_30();
}

void 	test_ld(void)
{
	test_ld_01();
	test_ld_02();
	test_ld_03();
	test_ld_04();
	test_ld_05();
	test_ld_06();
	test_ld_07();
	test_ld_08();
	test_ld_09();
	test_ld_10();
	test_ld_11();
	test_ld_12();
	test_ld_13();
	test_ld_14();
	test_ld_15();
	//test_ld_16();
}

void 	test_x(void)
{
	test_x_01();
	test_x_02();
	test_x_04();
	test_x_05();
	test_x_06();
	test_x_07();
	test_x_08();
	test_x_09();
	test_x_10();
	test_x_11();
	test_x_12();
	test_x_13();
	test_x_14();
	test_x_15();
	test_x_16();
	test_x_17();
	test_x_18();
	test_x_19();
	test_x_20();
	test_x_21();
	test_x_22();
	test_x_23();
	test_x_24();
	test_x_25();
	test_x_26();
	test_x_27();
}

void test_lx(void)
{
	test_lx_01();
	test_lx_02();
	test_lx_03();
	test_lx_04();
}

void 	test_i(void)
{
	test_i_01();
	test_i_02();
	test_i_03();
	test_i_04();
	test_i_05();
	test_i_06();
	test_i_07();
	test_i_08();

}

void 	test_o(void)
{
	test_o_01();
	test_o_02();
	test_o_03();
	test_o_04();
	test_o_05();
	test_o_06();
	test_o_07();
	test_o_08();
	test_o_09();
}

void 	test_lo(void)
{
	test_lo_01();
	test_lo_02();
	test_lo_03();
	test_lo_04();
	// test_o_05();
	// test_o_04();
	// test_o_05();
	// test_o_06();
	// test_o_07();
	// test_o_08();
	// test_o_09();
}

void 	mutant_test(void)
{
	mutant_01();
	mutant_02();
	mutant_03();
	mutant_04();
}

int main(void)
{
	//Test_list________________________

	//conv_d
	printf("=======> Conv_s <=======\n");
	// test_s();

	//Start conv_ls
	printf("=======> Conv_ls <=======\n");
	// test_ls();

	printf("=======> Conv_d <=======\n");
	test_d();

	printf("=======> Conv_D <=======\n");
	// test_ld();

	printf("=======> Conv_i <=======\n");
	// test_i();

	printf("=======> Conv_o <=======\n");
	//test_o();

	printf("=======> Conv_O <=======\n");
	// test_lo();

	printf("=======> Conv_x <=======\n");
	// test_x();

	printf("=======> Conv_lx <=======\n");
	// test_lx();

	//Start Conv_s

	//Start conv_lc
	printf("=======> Conv_lc <=======\n");
	// test_lc_01();
	// test_lc_02();
	// test_lc_03();
	// test_lc_04();
	// test_lc_05();
	// test_lc_06();
	//test_lc_07();


	//Start conv_p
	printf("=======> Conv_p <=======\n");
	// test_p_01();
	// test_p_02();
	// test_p_03();
	// test_p_04();
	// test_p_05();
	// test_p_06();

	//Start Mutants
	printf("=======> Mutant_Test <=======\n");
	//mutant_test();


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

	// printf("bob %.2s\n", "krevette"); // precision
	// printf("bob %2s\n", "krevette"); // precision
	//
	// printf("bob %5s\n", "krevette");
	// printf("bob %.*s\n", 2, "krevette");
	// printf("bob %*s\n", 40, "krevette");
	// printf("bob %2s\n", "krevette");
	// printf("bob %.2s\n", "krevette");
	// printf("bob %.2d\n", 12345678);
	// printf("bob %.2x\n", 0x12345678);
	// printf("bob %.2o\n", 01234567);
	// printf("bob %.20s\n", "krevette");
	// printf("bob %.20d\n", 12345678);
	// printf("bob %.20x\n", 0x12345678);
	// printf("bob %.20o\n", 01234567);
	// printf("bob %20s\n", "krevette");
	// printf("bob %20d\n", 12345678);
	// printf("bob %20x\n", 0x12345678);
	// printf("bob %20o\n", 01234567);
	// printf("bob %.o\n", 01234567);
	// printf("bob %.s\n", "krevette");
	//
	// printf("test = %#.10x\n", 3452);
	// printf("test = %#.10X\n", 3452);
	// printf("test = %#o\n", 5698);
	// printf("test = %#O\n", 5698);
	//
	//
	// printf("%  l%");
	// ft_printf("%%%");

	//conclusion : le pitch est a 0 si on a pas defini de nombre

	return (0);
}
