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
// lee el archivo linea por linea y guarda en save
static char ft_readfunc(int fd, char *buf, char *save) 
{
    int ret; // numero de bytes leidos
    char *str; // linea leida

    ret = 1;
    while (ret > 0)
    {
        ret = read(fd, buf, BUFFER_SIZE); // lee el archivo y guarda en ret
        if (ret == -1)
            return (NULL);
        buf[ret] = '\0'; // añade el caracter nulo al final de la linea leida
        if (!save)
            save = ft_strdup(buf);  // duplica la cadena de caracteres buf para guardarla en save
        else
            save = ft_strjoin(save, buf); // concatena la cadena de caracteres buf para guardarla en save
        if (ft_strchr(save, '\n')) // si hay un salto de linea para 
            break ;
    }
    str = ft_substr(save, 0, ft_strchr(save, '\n') - save); // guarda en str la linea leida
    save = ft_substr(save, ft_strchr(save, '\n') - save + 1, ft_strlen(save)); // guarda en save la linea leida
    return (str);
}

static char *ft_endfunc(char *str) // guarda la ultima linea leida
{
    char *save;

    if (ft_strchr(str, '\n')) // si hay un salto de linea para 
    {
        save = ft_substr(str, ft_strchr(str, '\n') - str + 1, ft_strlen(str)); // guarda en save la linea leida
        str = ft_substr(str, 0, ft_strchr(str, '\n') - str); // guarda en str la linea leida
    }
    else
    {
        save = ft_strdup(str);
        free(str);
    }
    return save;
}

static char *ft_free(char *save) 
{
    free(save);
    save = NULL;
    return (NULL);
}

char *get_next_line(int fd) // lee el archivo linea , guarda la linea leida y la devuelve 
{
    char *str; // linea leida
    char *buf; // buffer
    static char *save; // guarda la linea leida

    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1)); // asigna memoria para el buffer BUFFER_SIZE + 1

    if (fd < 0 || BUFFER_SIZE <= 0 || !buf ) 
        return (NULL);
    
    str = readfunc(fd, buf, save); 
    ft_free(buf);
    if (str == NULL)
        return (NULL);
    save = endfunc(str);
    return (str);
}