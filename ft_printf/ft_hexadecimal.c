/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:07:50 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/23 15:07:50 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexadecimal(unsigned int n, char c)
{
    unsigned long long count;

    count = 0;
    if (n >= 16)
        count = count + ft_hexadecimal(n / 16, c);
    if (c == 'x')
        ft_putchar(n % 16 + 'a');
    else if (c == 'X')
        ft_putchar(n % 16 + 'A');
    else
        ft_putchar(n % 16 + '0');
    return (count + 1);
}