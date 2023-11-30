/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:51:56 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/30 15:56:44 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize){
    
    size_t i;
    
    i = 0;
    
    while(src[i] != '\0' && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] != '\0';

    while(src[i] != '\0') {
        i++;
    }
    return i;
}

/*int main() {
    
    
     char src[10] = "asdgfdgrrj";

     char dst[10] = "";
     
     int i;

     i = ft_strlcpy(dst, src, 10);

     printf("%s\n", dst);
     return 1;
}

*/