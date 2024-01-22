/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:46:47 by aaizenbe          #+#    #+#             */
/*   Updated: 2024/01/22 15:10:27 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_free(char *a) 
{
    free(a);
    a = NULL;
    return (NULL);
}

char *ft_readfunc(int fd, char *buf, char *save) 
{
    ssize_t ret; // n butes leidos
    char *str; 

    ret = 1;
    while (ret != '\0')
    {
        ret = read(fd, buf, BUFFER_SIZE); // lee el archivo y guarda en ret
        if (ret == -1)
            return (NULL);
        if (ret == 0)
            break ;
        buf[ret] = '\0'; // null al final de la linea leida
        if (save == NULL)
            save = ft_strdup(buf);  // duplica la cadena de  buf para guardarla en save
        str = save;
        save = ft_strjoin(save, buf); // concatena  buf para guardar en save
        ft_free(str);
        if (ft_strchr(save, '\n')) // si hay un salto de linea para 
            break ;
    }
    return (save);
}

char *ft_linebreak(char *str) 
{
    char *save;
    size_t i;

    i = 0;
    while (str[i] != '\n' && str[i] != '\0') // cuenta los caracteres de la linea leida
        i++;
    if (str[i] == '\0') // si hay un salto de linea
        return (NULL);
    save = ft_substr(str, i, ft_strlen(str) + 1); // guarda la linea leida en save
    if (save == NULL)
        ft_free(save);
    str[ft_strlen(str)] = '\0'; 
    return (save);
}

char *get_next_line(int fd) // lee el archivo linea , guarda la linea leida y la devuelve 
{
    char *str; // linea leida
    char *buf; // buffer
    static char *save = NULL; // guarda la linea leida

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, save, 0) < 0)
        return (NULL);
    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1)); // asigna memoria para el buffer + 1
    if (!buf)
        return (NULL);
    str = ft_readfunc(fd, buf, save); 
    ft_free(buf);
    if (str == NULL || !str[0])
        return (NULL);
    save = ft_linebreak(str);
    return (str);
}