/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:14:38 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 16:14:40 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdbool.h>

int alphanum(char c){

    if((c >= 65 && c<= 90) || (c >= 97 && c<= 90) || (c >= 48 && c<= 57)){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    
    char ex[9] = "A23sadasd";
    
    
    if(alphanum(ex[0])){
        printf("aplhanum");
    }
    else{
        printf("not alphanum");
    }
}