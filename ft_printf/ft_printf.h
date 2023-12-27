/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:31:26 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/23 12:31:26 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


// # include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

size_t ft_strlen(const char *string);

void	ft_putstr(char *s);

void	ft_putchar(char *s);

int ft_hexadecimal(unsigned int n, char c);

unsigned long long ft_unsigned_int(unsigned int n);

#endif