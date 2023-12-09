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

static int nlen(long int num);

char *ft_itoa(int n) {
    char *str;
    unsigned int num;
    unsigned int len;

    len = nlen(n);

    // Учитываем отрицательные числа
    if (n < 0) {
        len++;
    }

    // Проверяем успешность выделения памяти
    str = (char *)malloc(sizeof(char) * (len + 1));

    if (str == NULL) {
        return NULL; // Если выделение памяти не удалось
    }

    // Замени тернарный оператор на конструкцию if-else
    if (n < 0) {
        num = -n;
    } else {
        num = n;
    }

    // Добавляем знак минуса для отрицательных чисел
    if (n < 0) {
        str[0] = '-';
    } else {
        str[0] = '0';  // Добавляем 0 для положительных чисел
    }

    str[len] = '\0';

    while (num != 0) {
        len--;
        str[len] = (num % 10) + '0';
        num = num / 10;
    }

    return str;
}

static int nlen(long int num) {
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
