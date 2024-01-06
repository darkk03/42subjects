/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:07:54 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/23 15:07:54 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_pointer(unsigned long int n, int *count)
{
    unsigned long long count;

    count = 0;
    ft_putstr("0x");
    count = count + 2;
    if (n >= 16)
        count = count + ft_hexadecimal(n / 16, 'x');
    ft_hexadecimal(n % 16, 'x');
    return (count);

}