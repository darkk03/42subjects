/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:59:16 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/13 13:53:02 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static char	*ft_strndup(const char *src, size_t n)
{
	char	*dest;

	dest = (char *)malloc(n + 1);
	if (!dest)
		return (NULL);
	strncpy(dest, src, n);
	dest[n] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	n;

	len = 0;
	n = 0;
	str = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!str)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != '\0' && *s != c)
			{
				++len;
				++s;
			}
			str[n++] = ft_strndup(s - len, len);
			len = 0;
		}
		else
		{
			++s;
		}
	}
	str[n] = 0;
	return (str);
}

// int main() {
//     const char *string1 = "Hello world";
//     char string2 = '-';

//     char **string3 = ft_split(string1, string2);

//     printf("string3: %p\n", (void *) string3);

//     for (size_t i = 0; string3[i] != NULL; ++i) {
//         printf("%s\n", string3[i]);
//         free(string3[i]);
//     }

//     free(string3);

//     return (0);
// }
