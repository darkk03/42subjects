/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:46:34 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/07 11:46:34 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int nlen(long int num);

char *ft_itoa(int n) {
    char *str;
    unsigned int num;
    unsigned int len;

    len = nlen(n);

    str = (char *)malloc(sizeof(char) * (len + 1));

    if (n < 0) {
        str[0] = '-';
        num = -n;
    } 
    
    else {
        num = n;
    }

    if (num == 0) {
        str[0] = '0';
    }

    str[len] = '\0';

    while (num != 0) {
        str[len - 1] = (num % 10) + '0';
        num = num / 10;
        len--;
    }
    return str;
}

int nlen(long int num) {
    size_t i = 0;
    while (num >= 10) {
        num = num / 10;
        i++;
    }
    return (i + 1);
}

// int main() {
//     int num = 12345;
//     printf("%s\n", ft_itoa(num));

//     return 0;
// }