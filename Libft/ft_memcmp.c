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

int ft_memcmp(const void *s1, const void *s2, size_t n){
    
    size_t i = 0;
    
    const char *string1 = (const char *)s1;
    const char *string2 = (const char *)s2;

    while(i < n) {
        
        if(*string1 ==  '\0' &&  *string2 == '\0') {
            return 0;
        } 
        else if(*string1  != *string2) {
            return (*string1 - *string2);
        }
        
        i++;
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