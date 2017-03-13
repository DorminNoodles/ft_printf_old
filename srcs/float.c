/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 10:48:24 by lchety            #+#    #+#             */
/*   Updated: 2017/03/13 11:57:19 by lchety           ###   ########.fr       */
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
	char buff[1000];
	char *str;

	i = 0;
	ft_bzero(buff, 1000);
	while (i < 800)
	{
		buff[i] = '0' + (int)n;
		n = n - (int)n;
		n = n * 10;
		i++;

	}

	if(!(str = (char*)ft_memalloc(sizeof(char) * ft_strlen(buff) + 1)))
		exit (EXIT_FAILURE);

	ft_strcpy(str, buff);
	return (str);
}

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

	if (find_sign(n) == -1)
	{
		printf("sign -\n");
		m_size += 1;
	}

	m_size += ft_strlen(str) + 1;
	tmp = str;
	if(!(str = (char*)ft_memalloc(sizeof(char) * m_size)))
		exit (EXIT_FAILURE);

	while (i < find_exponent(n))
	{
		str[i] = tmp[i];
		i++;
	}

	if (!find_exponent(n))
	{
		str[i] = tmp[i];
		i++;
	}
	str[i] = '.';
	i++;
	while (tmp[i-1])
	{
		str[i] = tmp[i-1];
		i++;
	}

	printf("%s\n", str);


	printf("END\n");
	return (str);
}
