/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:33:40 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/06 14:45:51 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Write the string str to file descriptor fd. Return the number of bytes actually written.

//size_t ft_strlen(const char *string);

void ft_putstr_fd(char *s, int fd){
    
    int n;
    
    n = ft_strlen(s);

    write(fd, s, n);
}

/*size_t ft_strlen(const char *string)
{
    size_t  x;
    
    x = 0;
    while(string[x] != '\0')
        x++;
    return (x);
}

int main(){
    char *test = "rhjdhfthdhfthh";
    int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        return 1;
    }

    ft_putstr_fd(test, fd);

    close(fd);
    return 0;
}*/