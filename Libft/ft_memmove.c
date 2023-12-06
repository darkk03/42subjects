/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:45:43 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/06 17:06:24 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies count bytes of src to dest. Allows copying between objects that overlap. 


void *ft_memmove(void *dest, const void *src, size_t len){
    
    char *s = (char *)src;
    char *d = (char *)dest;
    
    if (!src && !dest)
        return 0;
        
    if (dest <= src)
    {
      while(len--)
      {
        *d++ = *s++;
      }
    }
    else if (dest > src)
    {
      d += len - 1;
      s += len - 1;
      while(len--)
      {
         *d-- = *s--;
      }
    }
    
    return (dest);
}
    
/*int main() 
{ 
    char str1[] = "qwe"; 
    char str2[] = "qwee"; 
  
    puts(str1); 
  
    ft_memmove(str1, str2, sizeof(str2)); 
  
    puts(str1); 
  
    return 0; 
}*/