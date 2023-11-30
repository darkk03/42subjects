/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:57:08 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/30 18:03:56 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c){

    while(*s != '\0')
    {
        if(*s ==  '\0')
			return (NULL);
		else if(*s == c)
            return ((char *)s);
        s++;
    }
    return NULL;
}

/*
int main() {
    
    char *s = "Hola";
    char c = 'q';

    if (ft_strchr(s,c) == NULL){
        printf("0");
    }
    else{
        printf("1");
    };

    return 0;
}
*/
