/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:22:40 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/06 17:23:10 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    
    char *string;
    int i;
    int len;
    
    i = 0;
    
    if(s == NULL || f == NULL){
        return NULL;
    }
    
    len = ft_strlen(s);
    
    string = (char *)malloc(sizeof(char) * (len + 1));
    
    if (string == NULL) {
        return NULL; 
    }
    
    while(s[i] != '\0'){
        string[i] = f(i, s[i]);
        i++;
    }
    
    string[i] = '\0';
    return string;
}

/*size_t ft_strlen(const char *string){
    size_t  x;
    
    x = 0;
    while(string[x] != '\0')
        x++;
    return x;
}*/