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

static char readfunc(int fd, char *buf, char *save) // lee el archivo linea por linea y guarda en save
{
    int ret; // numero de bytes leidos
    char *str; // linea leida

    ret = 1; 
    while (ret > 0)
    {
        ret = read(fd, buf, BUFFER_SIZE); // lee el archivo y guarda en buf
        if (ret == -1)
            return (NULL);
        buf[ret] = '\0'; // añade el caracter nulo al final de la linea leida
        if (!save)
            save = ft_strdup(buf); // ft_strdup duplica la cadena de caracteres buf para guardarla en save
        else
            save = ft_strjoin(save, buf); // ft_strjoin concatena la cadena de caracteres buf para guardarla en save
        if (ft_strchr(save, '\n')) // si hay un salto de linea para 
            break ;
    }
    str = ft_substr(save, 0, ft_strchr(save, '\n') - save);
    save = ft_substr(save, ft_strchr(save, '\n') - save + 1, ft_strlen(save));
    return (str);
}

static char *putfunc(char *str) // guarda en save la linea leida
{
    char *save;

    save = ft_strdup(str);
    free(str);
    str = NULL;
    return (save);
}

char *get_next_line(int fd) // lee el archivo linea , guarda la linea leida y la devuelve 
{
    char *str; // linea leida
    char *buf; // buffer
    static char *save; // guarda la linea leida

    if (fd < 0 || BUFFER_SIZE <= 0 || !buf) // comprobacion de que el archivo existe y que BUFFER_SIZE es mayor que 0
        return (NULL);
    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1)); // asigna memoria para el buffer de tamaño BUFFER_SIZE + 1
    if (!buf)
        return (NULL); // si no se ha asignado memoria buf = NULL
    str = readfunc(fd, buf, save); // lee el archivo y guarda en str la linea leida
    free(buf);
    buf = NULL; 
    if (str == NULL)
        return (NULL);
    save = putfunc(str); //
    return (str);
}