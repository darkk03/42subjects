/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:52:38 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/27 15:52:41 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdbool.h>

int tolowere(char c){

    if(c >= 65 && c <= 90){
        c = c + 32;
        return(c);
    }
    else{
        return c;
    }

}

int main(){
    
    char ex[] = "b";
    
    printf ("c = %d \n",tolowere(ex[0]));
}