/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 00:31:46 by lchety            #+#    #+#             */
/*   Updated: 2017/03/03 16:43:55 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  ft_wstrlen (const wchar_t *s)
{
    size_t length;

    length = 0;
    while (*(s + length) != '\0')
        length++;

    return (length);
}
