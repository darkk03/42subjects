/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:48:54 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 15:48:57 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isdigit(int c){

    if(c >= 48 && c<= 57) {
        return true;
    }
    else{
        return false;
    }
}


// int main(){
    
//     char ex[] = "1";
    
    
//     if(ft_isdigit(ex[0])){
//         printf("num");
//     }
//     else{
//         printf("not num");
//     }
// }