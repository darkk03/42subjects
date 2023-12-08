/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:42:16 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/07 14:42:16 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// creates a new list element with the content passed as an argument

// typedef struct s_list
// {
//     void *content;
//     struct s_list *next;
// } t_list;

t_list *ft_lstnew(void *content){
    
    t_list *i;

    i = (t_list *)malloc(sizeof(t_list));
    if (i == NULL) {
        return NULL;
    }
    i->content = content;
    i->next = NULL;
    return i;
}

// int main() {
//     char *str = "Hello World";
//     t_list *list = ft_lstnew(str);
//     printf("%s\n", list->content);
//     return 0;
// }