/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:52:57 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/02 11:52:57 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *string);


char *ft_strnstr(const char *haystack, const char *needle, size_t len){
    
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    
    while(haystack[i] != '\0' && needle[j] != '\0' && i < len){
        if(haystack[i] == needle[j]){
            while(haystack[i + j] == needle[j] && i + j < len){
				if (needle[j + 1] == '\0'){
					return ((char *)haystack + i);   
				}
				j++;
            }
        }
        i++;
    }
    
    return NULL;
}

// size_t ft_strlen(const char *string)
// {
//     size_t  x;
    
//     x = 0;
//     while(string[x] != '\0')
//         x++;
//     return (x);
// }

// int main() {
//     const char *haystack = "Hello, world!";
//     const char *needle = "world";
//     size_t len = 13;

//     size_t haystack_len = ft_strlen(haystack);

//     char *result = ft_strnstr(haystack, needle, len);

//     if (result != NULL && result - haystack < haystack_len) {
//         printf("%ld", result - haystack);
//     } else {
//         return 0;
//     }

//     return 0;
// }