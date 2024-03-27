/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:10:42 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/02/07 15:45:36 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *a)
{
	free(a);
	a = NULL;
	return (NULL);
}

char	*ft_readfunc(int fd, char *buf, char *save)
{
	char	*temp;
	ssize_t	ret;

	ret = 1;
	while (ret != 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == 0)
			break ;
		buf[ret] = '\0';
		if (save == NULL)
			save = ft_strdup("");
		temp = save;
		save = ft_strjoin(temp, buf);
		ft_free(temp);
		if (ft_strchr(buf, '\n') || ret < BUFFER_SIZE)
			break ;
	}
	if (save == NULL)
		return (NULL);
	return (save);
}

char	*ft_linebreak(char *str)
{
	char	*save;
	size_t	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0' || str[i + 1] == '\0')
		return (NULL);
	save = ft_substr(str, i + 1, ft_strlen(str) - i);
	if (*save == '\0')
	{
		return (ft_free(save));
	}
	str[i + 1] = '\0';
	return (save);
}

char	*get_next_line(int fd)
{
	char		*str;
	char		*buf;
	static char	*save[2048];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (read(fd, 0, 0) == -1)
	{
		free(save[fd]);
		save[fd] = NULL;
		return (NULL);
	}
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	str = ft_readfunc(fd, buf, save[fd]);
	ft_free(buf);
	if (!str)
		return (NULL);
	save[fd] = ft_linebreak(str);
	return (str);
}
