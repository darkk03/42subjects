/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:31:45 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/01/02 17:16:42 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_printf_type_checker(char str, va_list *args, int *i)
{
    if (str == 'd' || str == 'i')
        ft_putnbr(va_arg(*args, long long int));
    else if (str == 's')
        ft_putstr(va_arg(*args, char *));
    else if (str == 'c')
        ft_putchar(va_arg(*args, int ));
    else if (str == 'p')
        ft_pointer(va_arg(*args, int));
    else if (str == 'u')
        ft_unsigned_int(va_arg(*args, unsigned long long));
    else if (str == 'x' || str == 'X')
        ft_hexadecimal(va_arg(*args, int), str);
    else if (str == '%')
        ft_putchar('%');
    else
        (*i)--;
}

int ft_printf(char const *str, ...)
{
    va_list args;
    int i;

    i = 0;
    va_start(args, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            ft_printf_type_checker(str[i], &args, &i);
            i++;
        }
        i++;
    }
    va_end(args);
    return (len);
}