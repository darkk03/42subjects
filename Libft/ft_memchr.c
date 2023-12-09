/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:53:19 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/01 15:53:19 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    
    size_t i = 0;
    
    const char *str = (const char *)s;

    while(i < n) {
        if(str[i] == c) {
            return (void *)&str[i];
        }
        i++;
    }

    return NULL;
}

// int main() {
//     const char *str = "Hello";
//     char test = 'o';

//     const char *result = ft_memchr(str, test, strlen(str));

//     if (result != NULL) {
//         printf("%c %ld", test, result - str);
//     } else {
//         printf("0");
//     }

//     return 0;
// }
