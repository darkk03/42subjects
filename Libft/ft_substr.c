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

char *ft_substr(char const *s, unsigned int start, size_t len) {
    size_t i;
    char *string;

    if (s == NULL)
	return NULL;

    if (len > ft_strlen(s + start)) {
        len = ft_strlen(s + start);
    }

    if (start >= ft_strlen(s) || len == 0) {
        return ft_strdup("");
    }

    string = (char *)malloc(sizeof(*s) * (len + 1));

    if (string == NULL)
        return NULL;

    i = 0;
    while (i < len && s[start + i] != '\0') {
        string[i] = s[start + i];
        i++;
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
