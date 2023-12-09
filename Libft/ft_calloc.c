/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:42:08 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/03 12:42:08 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num, size_t size){

    void *i;
    
    if(size == 0 || num == 0){
        size = 1;
	num = 1;
    }
    
    i = malloc(num * size);
    
    if (i != NULL)
    {
    	ft_bzero(i, num * size);
    }

    return i;
        
}


// int main() {

//     int *num = (int *)ft_calloc(3, sizeof(int));

//     if (num != NULL) 
//     {
//         for (size_t i = 0; i < 3; ++i) {
//             printf("%d", num[i]);  
//         }
        
//     } 
    
//     else 
//     {
//         printf("nop \n");
//     }

//     return 0;
// }
