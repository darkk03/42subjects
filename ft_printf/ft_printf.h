/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:31:26 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/01/09 15:26:25 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void	ft_putstr(char *s , int *count);

void	ft_putchar(char c , int *count);

void    ft_hexadecimal(unsigned int n, char c , int *count);

void    ft_pointer(unsigned long int n , int *count);

void    ft_putnbr(long long n , int *count);

void    ft_unsigned_int(unsigned int n , int *count);

int ft_printf(char const *str, ...);

#endif