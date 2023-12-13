/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:11:06 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/06 14:29:19 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Write the character c to file descriptor fd.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main(){
	char *test = "r";
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1) {
		return (1);
	}

	ft_putchar_fd(*test, fd);

	close(fd);
	return (0);
}*/