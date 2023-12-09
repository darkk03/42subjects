/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:58:20 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/30 15:59:26 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;

	// Находим длину dst
	while (dst[i] && i < size)
		i++;

	dst_len = i;

	// Добавляем src к dst
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}

	// Завершаем dst нулевым символом
	if (i < size)
		dst[i + j] = '\0';

	// Рассчитываем необходимый размер (без учета нулевого символа)
	return dst_len + ft_strlen(src);
}



/*
int main() {
    
    
     char src[10] = "asdgfdgrrj";

     char dst[10] = "";
     
     int i;
     

     i = ft_strlcat(dst, src, 10);

     printf("%s\n", dst);
     return 1;
}
*/
