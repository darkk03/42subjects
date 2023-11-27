/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:18:04 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 14:18:43 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdbool.h>

int alpha(char c){

    if((c >= 65 && c<= 90) || (c >= 97 && c<= 90)){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    
    char ex[] = "A";
    
    
    if(alpha(ex[0])){
        printf("aplha");
    }
    else{
        printf("not alpha");
    }
}