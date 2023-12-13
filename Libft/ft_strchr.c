/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:57:08 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/13 13:31:41 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char )c)
			return ((char *)s);
		s++;
	}
	if (*s == (char )c)
		return ((char *)s);
	return (NULL);
}

// int main() {

//     char *s = "Haola";
//     char c = 'a';

//     char *result = ft_strchr(s, c);

//     if (ft_strchr(s,c) == NULL){
//         printf("0");
//     }
//     else{
//         printf("1 %ld", result - s);
//     };

//     return (0);
// }
