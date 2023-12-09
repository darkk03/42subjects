/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:00:53 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/04 14:00:53 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
// size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
// size_t ft_strlen(const char *string);

char *ft_strjoin(char const *s1, char const *s2) {
    
    size_t string1;
    size_t string2;
    char *res;
    
    string1 = ft_strlen(s1);
    string2 = ft_strlen(s2);
    
    res = (char *)malloc(string1 + string2 + 1);
    if(res == 0){
        return NULL;
    }

    
    ft_strlcpy(res, s1, string1 + string2 + 1); 
    ft_strlcat(res, s2, string1 + string2 + 1); 
    
    return res;
}

// size_t ft_strlen(const char *string)
// {
//     size_t  x;
    
//     x = 0;
//     while(string[x] != '\0')
//         x++;
//     return (x);
// }

// size_t  ft_strlcat(char *dst, const char *src, size_t dstsize){
    
//     size_t i;
//     size_t j;
    
//     i = 0;
//     j = 0;
    
//     while(src[i] != '\0' && i < dstsize)
//     {
//         dst[i] = src[j];
//         i++;
//         j++;
//     }
    

//     return i;
// }

// size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize){
    
//     size_t i;
    
//     i = 0;
    
//     while(src[i] != '\0' && i < dstsize)
//     {
//         dst[i] = src[i];
//         i++;
//     }
//     dst[i] != '\0';

//     while(src[i] != '\0') {
//         i++;
//     }
//     return i;
// }


// int main() {
    
//     const char *str1 = "Hello, World";
//     const char *str2 = "Welcome";
    
//     char *str3 = ft_strjoin(str1, str2);

//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);
//     printf("str3: %s\n", str3);
// }
