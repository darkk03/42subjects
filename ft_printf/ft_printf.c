/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:31:45 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/23 12:31:45 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *str, ...)
{
    va_list args;
    int count;

    int i;
    count;

    i = 0;
    count = 0;
    va_start(args, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            ft_printf_type_checker(str, i, args);
        }
        else
            count = count + ft_putchar(str[i]);
        i++;
    }
    va_end(args);
    return (count);
}

static void ft_printf_type_checker( char const *str, int i, va_list args)
{
    if (str[i] == 'd' || str[i] == 'i')
        ft_putnbr(va_arg(args, int));
    else if (str[i] == 's')
        ft_putstr(va_arg(args, char *));
    else if (str[i] == 'c')
        ft_putchar(va_arg(args, int));
    else if (str[i] == 'p')
        ft_pointer(va_arg(args, int));
    else if (str[i] == 'u')
        ft_unsigned_int(va_arg(args, int));
    else if (str[i] == 'x' || str[i] == 'X')
        ft_hexadecimal(va_arg(args, int));
    else if (str[i] == '%')
        ft_putchar('%');
    else
        return (0);
}