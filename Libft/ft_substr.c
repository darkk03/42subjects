/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:00 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/04 12:25:00 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *string);

char *ft_substr(char const *s, unsigned int start, size_t len){
    
    int i;
    char *string;
    
    i = 0;
    
    len = ft_strlen(s);
    string = malloc(len + 1);
    
    if(s == 0 || start == 0){
        return NULL;
    }

    while(i < len){
        string[i] = s[start + i];
        i++ ;
    }    
    string[i] = '\0';
    
    return string;
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
    
//     const char *str1 = "Hello, World!";
    
//     char *str2 = ft_substr(str1, 7, 5);
//     printf("str1 %s\n", str1);
//     printf("str2 %s\n", str2);

//     return 0;
// }