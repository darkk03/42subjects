/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:50:37 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/01 15:50:37 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n) {

    size_t i;

    i = 0;

    while ((i < n) && (str1[i] != '\0' || str2[i] != '\0')) {

	if ((str1[i] == '\0' && str2[i] == '\0') && (i == n)) {
    	    return 0;
        }
        if ((unsigned char)str1[i] > (unsigned char)str2[i]) {
    	    return 1;
	}
	if ((unsigned char)str1[i] < (unsigned char)str2[i]) {
    	    return -1;
	}
        i++;
    }
    return 0;
}

// int main() {
//     char *str1 = "Helly";
//     char *str2 = "Hello";

//     int result = ft_strncmp(str1, str2, 6);

//     if (result == 0) {
//         printf("str1 = str2\n");
//     } else if (result < 0) {
//         printf("str1 < str2\n");
//     } else {
//         printf("str1 > str2 \n");
//     }

//     return 0;
// }
