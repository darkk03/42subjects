/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:46:47 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/01/03 17:46:47 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char *str;
    char *buf;
    int i;
    int j;

    i = 0;
    j = 0;
    buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (fd < 0 || BUFFER_SIZE <= 0 || !buf)
        return (NULL);
    while (read(fd, buf, BUFFER_SIZE) > 0)
    {
        while (buf[i] != '\0')
        {
            str[j] = buf[i];
            i++;
            j++;
        }
        str[j] = '\0';
    }
    free(buf);
    return (str);
}