/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:58:20 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/13 11:59:49 by aaizenbe         ###   ########.fr       */
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
	while (dst[i] && i < size)
		i++;
	dst_len = i;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (dst_len + ft_strlen(src));
}

/*
int	main(void) {


		char src[10] = "asdgfdgrrj";

		char dst[10] = "";

		int i;


		i = ft_strlcat(dst, src, 10);

		printf("%s\n", dst);
		return (1);
}
*/
