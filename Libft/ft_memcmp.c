/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:32:56 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/01 18:32:56 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *string1 = (const unsigned char *)s1;
    const unsigned char *string2 = (const unsigned char *)s2;

    while (n-- > 0) {
        if (*string1 != *string2) {
            return (*string1 - *string2);
        }
        string1++;
        string2++;
    }

    return 0;
}

// int main() {
//     const char *str1 = "Hello";
//     const char *str2 = "Hello";

//     int result = ft_memcmp(str1, str2, 6);

//     if (result == 0) {
//         printf("str1 = str2\n");
//     } 
//     else if (result < 0) {
//         printf("str1 < str2\n");
//     } 
//     else {
//         printf("str1 > str2\n");
//     }

//     return 0;
// }
