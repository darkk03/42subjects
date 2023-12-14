/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:53:37 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/05 12:53:37 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start_index(const char *s1, const char *set)
{
	size_t i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	return i;
}

static size_t	get_end_index(const char *s1, const char *set, size_t len)
{
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	return len;
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*string1;
	size_t	len;
	size_t	i;
	size_t	j;

	i = get_start_index(s1, set);
	len = get_end_index(s1, set, ft_strlen(s1));
	string1 = (char *)malloc(len - i + 1);
	if (string1 == NULL)
		return (NULL);
	j = 0;
	while (i < len)
	{
		string1[j++] = s1[i++];
	}
	string1[j] = '\0';
	return (string1);
}

// char *ft_strchr(const char *s, int c);
// size_t ft_strlen(const char *string);

/*char	*ft_strtrim(const char *s1, const char *set)
{
	char	*string1;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	string1 = (char *)malloc(len - i + 1);
	if (string1 == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		string1[j] = s1[i];
		i++;
		j++;
	}
	string1[j] = '\0';
	return (string1);
}*\

// char *ft_strchr(const char *s, int c){

//     while(*s != '\0')
//     {
//         if(*s ==  '\0')
// 			return (NULL);
// 		else if(*s == c)
//             return ((char *)s);
//         s++;
//     }
//     return (NULL);
// }

// size_t ft_strlen(const char *string)
// {
//     size_t  x;

//     x = 0;
//     while(string[x] != '\0')
//         x++;
//     return (x);
// }

// int main() {

//     const char *str1 = "Hello, World";
//     const char *str2 = "Hd";

//     const char *str3 = ft_strtrim(str1, str2);

//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);
//     printf("str3: %s\n", str3);
// }
