/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:27:51 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/10 15:27:51 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *n;
    t_list *t;

    if (lst == NULL || f == NULL)
    {
        return NULL;
    }
    n = NULL;
    while (lst != NULL)
    {
        t = ft_lstnew(f(lst->content));
        if (t == NULL)
        {
            ft_lstclear(&n, del);
            return NULL;
        }
        ft_lstadd_back(&n, t);
        lst = lst->next;
    }
    return n;
}
