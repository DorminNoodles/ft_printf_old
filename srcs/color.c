/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 17:21:35 by lchety            #+#    #+#             */
/*   Updated: 2017/03/28 14:40:42 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*switch_color(const char *str)
{
	char *find;

	find = NULL;
	if ((find = ft_strstr(str, "black")))
		ft_putstr(BLACK);
	else if ((find = ft_strstr(str, "red")))
		ft_putstr(RED);
	else if ((find = ft_strstr(str, "green")))
		ft_putstr(GREEN);
	else if ((find = ft_strstr(str, "yellow")))
		ft_putstr(YELLOW);
	else if ((find = ft_strstr(str, "blue")))
		ft_putstr(BLUE);
	else if ((find = ft_strstr(str, "magenta")))
		ft_putstr(MAGENTA);
	else if ((find = ft_strstr(str, "cyan")))
		ft_putstr(CYAN);
	else if ((find = ft_strstr(str, "white")))
		ft_putstr(WHITE);
	else if ((find = ft_strstr(str, "eoc")))
		ft_putstr(NOCOLOR);
	return (find);
}

int		pars_color(const char *fmt)
{
	int		i;
	char	*end;
	char	*tmp;

	end = NULL;
	i = 0;
	if (*fmt == '{')
		end = ft_strchr(fmt, '}');
	else
		return (0);
	tmp = ft_strsub(fmt, 0, end - fmt);
	if (switch_color(tmp) == NULL)
		return (0);
	free(tmp);
	return ((end - fmt) + 1);
}
