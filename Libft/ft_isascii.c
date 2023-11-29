/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:40:13 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 16:41:01 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c){

    if(c >= 0 && c<= 127){
        return true;
    }
    else{
        return false;
    }
}


// int main(){
    
//     char ex[] = "Ä";
    
    
//     if(ft_isascii(ex[0])){
//         printf("is ascii");
//     }
//     else{
//         printf("not ascii");
//     }
// }
