/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:40:09 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/03 13:40:09 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *string);

char *ft_strdup(const char *s){
    
    int i;
    int j;
    char *string;

    i = 0;

    if(s == 0){
        return NULL;
    }
    
    j = ft_strlen(s);
    
    string = (char *)malloc(j + 1);
    
    while(i < j)
    {
        string[i] = s[i];
        i++;
    }
    
    string[j] = '\0';
    
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
    
//     char *str2 = ft_strdup(str1);

//     printf("str1 %s\n", str1);
//     printf("str2 %s\n", str2);

//     return 0;
// }