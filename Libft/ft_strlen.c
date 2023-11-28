/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:08:30 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 17:08:33 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


size_t ft_strlen(const char *string){

    size_t x;
    
    x = 0;
    while(string[x] != '\0'){
        x++;
    }
    return(x);
    
}


// int main(){
    
//     char ex[] = "fsdfsdfsdf";
    
    
//     printf("%zu\n", ft_strlen(ex));

// }
