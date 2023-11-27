/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:14:30 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 15:14:39 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdbool.h>

int toapper(char c){

    if(c >= 97 && c <= 122){
        c = c - 32;
        return(c);
    }
    else{
        return c;
    }

}


int main(){
    
    char ex[] = "b";
    
    printf ("c = %d \n",toapper(ex[0]));
}