/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:31:26 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/01/02 16:48:56 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

size_t ft_strlen(const char *string);

void	ft_putstr(char *s);

void	ft_putchar(int s);

int ft_hexadecimal(unsigned int n, char c);

int ft_pointer(unsigned long int n);

void ft_putnbr(long long n);

unsigned long long ft_unsigned_int(unsigned int n);

int ft_printf(char const *str, ...);

#endif