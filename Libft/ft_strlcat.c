/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:58:20 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/30 15:59:26 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize){
    
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    
    while(src[i] != '\0' && i < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    

    return i;
}

/*
int main() {
    
    
     char src[10] = "asdgfdgrrj";

     char dst[10] = "";
     
     int i;
     

     i = ft_strlcat(dst, src, 10);

     printf("%s\n", dst);
     return 1;
}
*/