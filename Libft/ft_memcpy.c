/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:41:17 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/11/30 11:41:20 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 	Copies count bytes of src to dest.

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!src && !dest)
		return (0);
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main() {

//     char src[10] = "asdgfdgrrj";

//     char dest[10] = "";

//     ft_memcpy(dest,src,sizeof(src));

//     printf("dest = %s\n", dest);
//     return (1);
// }
