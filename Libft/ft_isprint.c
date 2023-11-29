/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispriting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:53:57 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 16:54:01 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c){

    if(c >= 32 && c<= 126){
        return true;
    }
    else{
        return false;
    }
}


// int main(){
    
//     char ex[] = "a";
    
    
//     if(ft_isprint(ex[0])){
//         printf("printing");
//     }
//     else{
//         printf("not printing");
//     }
// }