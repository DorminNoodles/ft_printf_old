/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 17:21:35 by lchety            #+#    #+#             */
/*   Updated: 2017/03/21 20:55:31 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*switch_color(const char *str)
{
	char *find;

	find = NULL;
	if ((find = ft_strstr(str, "black")))
		ft_putstr(BLACK);
	if ((find = ft_strstr(str, "red")))
		ft_putstr(RED);
	if ((find = ft_strstr(str, "green")))
		ft_putstr(GREEN);
	if ((find = ft_strstr(str, "yellow")))
		ft_putstr(YELLOW);
	if ((find = ft_strstr(str, "blue")))
		ft_putstr(BLUE);
	if ((find = ft_strstr(str, "magenta")))
		ft_putstr(MAGENTA);
	if ((find = ft_strstr(str, "cyan")))
		ft_putstr(CYAN);
	if ((find = ft_strstr(str, "white")))
		ft_putstr(WHITE);
	if ((find = ft_strstr(str, "eoc")))
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
	if (!switch_color(tmp))
		return (0);
	free(tmp);
	return ((end - fmt) + 1);
}
