/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_norminette.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 11:26:49 by lchety            #+#    #+#             */
/*   Updated: 2017/01/13 11:47:30 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fna(void)
{
	int i;

	i = 0;
}

void	fnb(void)
{
	int i;

	i = 0;
}

void	fnc(void)
{
	int i;

	i = 0;
}

int		main(void)
{
	void (*const pf[])(void) = {fna, fnb, fnc};

	return (0);
}
