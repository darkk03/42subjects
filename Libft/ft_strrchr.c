/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:18:45 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/01 14:18:45 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *string);

char *ft_strrchr(const char *s, int c){

    int i;
    
    i = ft_strlen((char *)s);
    
    while (i >= 0) {
        if (s[i] == c) {
            return ((char *)&s[i]);
        }
        i--;
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
    
//     char *s = "aoala";
//     char c = 'a';

//     char *result = ft_strrchr(s, c);


//     if (ft_strrchr(s,c) == NULL){
//         printf("0");
//     }
//     else{
//         printf("1 %ld", result - s);
//     };

//     return 0;
// }



