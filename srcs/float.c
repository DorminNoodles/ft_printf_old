/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 10:48:24 by lchety            #+#    #+#             */
/*   Updated: 2017/03/12 00:29:28 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		find_sign(double n)
{
	if (n < 0.0)
		return (-1);
	return (1);
}

char	*find_mantisse(double n)
{
	int i;
	char buff[255];
	char *str;

	i = 0;
	ft_bzero(buff, 255);

	double g = 2.5433;
	g = g * 100.0;
	g = g * 100.0;
	g = g * 100.0;
	g = g * 100.0;
	g = g * 100.0;
	g = g * 100.0;
	g = g * 100.0;
	g = g * 100.0;
	g = g * 100.0;
	printf("%f", g);

	while (n > 9)
		n /= 10;

		printf("      ");
	// printf("#n = %f\n", n);
	// printf("test = %d\n", (int)n);
	while (n != 0.0)
	{
		buff[i] = '0' + (int)n;
		//printf("%c", buff[i]);
		n = n - (int)n;
		n = n * 10;
		i++;
	}

	if(!(str = (char*)ft_memalloc(sizeof(char) * ft_strlen(buff) + 1)))
		exit (EXIT_FAILURE);

	ft_strcpy(str, buff);
	// printf("str : %s\n", str);
	return (str);
}

// char	*find_mantisse(double n)
// {
// 	int i;
// 	char buff[255];
// 	char	*str;
//
// 	i = 0;
// 	ft_bzero(buff, 255);
// 	while (n > 9)
// 		n /= 10;
// 	printf("prepare for mantisse : %f\n", n);
// 	while (n != 0.0 && i < 300)
// 	{
// 		//printf("*%d*\n", (int)n);
// 		printf("va te faire %d\n", i);
// 		buff[i] = '0' + (int)n;
// 		n -= (int)n;
// 		n *= 10;
// 		printf("%c\n", buff[i]);
// 		// printf("%d", (int)n - ((int)n/10));
// 		//n = n / 10;
// 		i++;
// 	}
// 	printf("test : %s\n", buff);
// 	printf("i = %d\n", i);
// 	printf("bordel\n");
// 	//printf("*%s*\n", buff);
// 	printf("strlen = %d\n", (int)ft_strlen(buff));
// 	//str = (char*)ft_memalloc(sizeof(char) * ft_strlen(buff));
// 	//ft_strcpy
// 	return (str);
// }

int		find_exponent(double n)
{
	int i;

	i = 0;
	if((int)n == 0)
		return (-1);
	while ((int)n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ftoa(double n)
{
	char	*str;
	bool	sign;
	int		m_size;
	int		i;
	char*	tmp;

	i = 0;

	str = find_mantisse(n);

	//find_sign(n);
	//find_mantisse(n);
	//printf("exponent : %d\n", find_exponent(n));
	if (find_sign(n) == -1)
	{
		// printf("sign -\n");
		m_size += 1;
	}

	m_size += ft_strlen(str) + 1;
	tmp = str;
	if(!(str = (char*)ft_memalloc(sizeof(char) * m_size)))
		exit (EXIT_FAILURE);
		// printf("m_size %d\n", m_size);
	while (i < find_exponent(n))
	{
		str[i] = tmp[i];
		i++;
	}
	// printf("test %d\n", i);
	str[i] = '.';
	// printf("test01 : %s\n", str);
	i++;
	while (tmp[i-1])
	{
		// ft_printf("test01 : %s\n", str);
		// printf("a : %d    b : %d  \n", i, i-1);
		str[i] = tmp[i-1];
		i++;
	}

	printf("test : %s\n", str);


		printf("END\n");
	return (str);
}
