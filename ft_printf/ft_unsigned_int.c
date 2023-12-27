/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:07:52 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/23 15:07:52 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long long ft_unsigned_int(unsigned int n)
{
    unsigned long long count;

    count = 0;
    if (n >= 10)
        count = count + ft_unsigned_int(n / 10);
    ft_putchar(n % 10 + '0');
    return (count + 1);
}