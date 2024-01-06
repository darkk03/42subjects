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

void ft_hexadecimal(unsigned int n, char c, int *count)
{
    if (n >= 16)
        ft_hexadecimal(n / 16, c, count); 
    if (c == 'x')
        ft_putchar(n % 16 + 'a', count); // 012456789abcdef
    else if (c == 'X')
        ft_putchar(n % 16 + 'A', count); // 012456789ABCDEF
    else
        ft_putchar(n % 16 + '0', count); // 0123456789
    (*count)++;
}