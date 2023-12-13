/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:05:23 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/06 14:06:03 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Write the numbers to file descriptor fd.

// void ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	if (n < 10)
	{
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

/*void ft_putchar_fd(char c, int fd){

	write(fd, &c, 1);
}

int	main(void){
	int test = 4324234;
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1) {
		return (1);
	}
	ft_putnbr_fd(test, fd);
	close(fd);
	return (0);
}*/
