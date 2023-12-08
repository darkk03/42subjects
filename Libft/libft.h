/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:49 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/06 12:12:58 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h> 
#include <string.h>
#include <fcntl.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;



#endif