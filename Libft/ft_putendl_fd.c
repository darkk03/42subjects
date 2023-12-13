/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:57:55 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/06 14:50:09 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Write the string str to file descriptor fd with line break.

// size_t ft_strlen(const char *string);

void	ft_putendl_fd(char *s, int fd)
{
	int	n;

	n = ft_strlen(s);
	write(fd, s, n);
	write(fd, "\n", 1);
}

/*size_t ft_strlen(const char *string)
{
	size_t	x;

	x = 0;
	while(string[x] != '\0')
		x++;
	return (x);
}

int	main(void){
	char *test = "rhjdhfthdhfthh";
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1) {
		return (1);
	}

	ft_putendl_fd(test, fd);

	close(fd);
	return (0);
}*/