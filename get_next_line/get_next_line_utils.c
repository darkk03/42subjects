/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:46:51 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/02/07 11:58:27 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *string)
{
	size_t	x;

	x = 0;
	while (string[x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*string;

	i = 0;
	j = ft_strlen(s);
	string = (char *)malloc(j + 1);
	if (!string)
		return (NULL);
	while (i < j)
	{
		string[i] = s[i];
		i++;
	}
	string[j] = '\0';
	return (string);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*string;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
	{
		return (ft_strdup(""));
	}
	else if (len > ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
	}
	string = (char *)malloc(sizeof(*s) * (len + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		string[i] = s[start + i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
//123
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i + 1 < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
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


char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	string1;
	size_t	string2;
	char	*res;

	string1 = ft_strlen(s1);
	string2 = ft_strlen(s2);
	res = (char *)malloc(string1 + string2 + 1);
	if (res == 0)
		return (NULL);
	ft_strlcpy(res, s1, string1 + string2 + 1);
	ft_strlcat(res, s2, string1 + string2 + 1);
	return (res);
}










