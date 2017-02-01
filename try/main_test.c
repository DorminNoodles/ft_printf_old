/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 16:00:34 by lchety            #+#    #+#             */
/*   Updated: 2017/02/01 12:27:07 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main_test.h"
#include "string.h"

int		main(void)
{
	int t01 = 0;
	int t02 = 0;
	int status;

	if(test_01())
		t01 = 1;
	if(test_02())
	{
		t02 = 1;
	}

	printf("\n\n\n\n\n\n");

	if (t01)
		printf("Test 01 : OK\n");
	else
		printf("Test 01 : FALSE\n");

	if (t02)
		printf("Test 02 : OK\n");
	else
		printf("Test 02 : FALSE\n");

	return (1);
}

int test_01(void)
{
	int status;
	int status_diff;
	int ret;
	int fd_diff;
	int fd;
	char buff[BUFF_SIZE];
	char buff_diff[BUFF_SIZE];
	int segfault;
	int segfault_diff;

	segfault = 0;
	segfault_diff = 0;
	ret = 0;

	status_diff = system("./test_01_diff");
	status = system("./test_01");

	if (status_diff == 11)
		segfault_diff = 1;
	else
		system("./test_01_diff > out_diff");

	if (status == 11)
		segfault = 1;
	else
		system("./test_01 > out");

	if (segfault && segfault_diff == segfault)
	{
		return (1);
	}
	else
	{
		fd_diff = open("out_diff", O_RDONLY);
		fd = open("out", O_RDONLY);

		ret = read(fd_diff, buff_diff, BUFF_SIZE);
		buff_diff[ret] = '\0';
		ret = read(fd, buff, BUFF_SIZE);
		buff[ret] = '\0';

		printf("# %s\n", buff);
		printf("# %s\n", buff_diff);

		if((memcmp(buff, buff_diff, strlen(buff_diff))) == 0)
		{
			printf("CHOKO");
			return (1);
		}
	}
	return (0);
}

int test_02(void)
{
	int status;
	int status_diff;
	int ret;
	int fd_diff;
	int fd;
	char buff[BUFF_SIZE];
	char buff_diff[BUFF_SIZE];
	int segfault;
	int segfault_diff;

	segfault = 0;
	segfault_diff = 0;
	ret = 0;

	status_diff = system("./test_02_diff");
	status = system("./test_02");

	if (status_diff == 11)
		segfault_diff = 1;
	else
		system("./test_02_diff > out_diff");

	if (status == 11)
		segfault = 1;
	else
		system("./test_02 > out");

	if (segfault && segfault_diff == segfault)
	{
		return (1);
	}
	else
	{
		fd_diff = open("out_diff", O_RDONLY);
		fd = open("out", O_RDONLY);

		ret = read(fd_diff, buff_diff, BUFF_SIZE);
		buff_diff[ret] = '\0';
		ret = read(fd, buff, BUFF_SIZE);
		buff[ret] = '\0';

		if(memcmp(buff, buff_diff, strlen(buff_diff)) == 0)
			return (1);
	}
	return (0);
}


//11 code segfault
