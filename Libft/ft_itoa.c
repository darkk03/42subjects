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

int		nlen(long int num);

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	numb;

	numb = n;
	if (numb < 0)
		numb = -numb;
	len = nlen(numb);
	if (n < 0)
		len++;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (numb == 0)
		str[0] = '0';
	while (numb > 0)
	{
		str[len--] = (numb % 10) + '0';
		numb = numb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int	nlen(long int num)
{
	size_t	i;

	i = 0;
	while (num >= 10)
	{
		num = num / 10;
		i++;
	}
	return (i + 1);
}

// int main() {
//     int num = 12345;
//     printf("%s\n", ft_itoa(num));

//     return (0);
// }
