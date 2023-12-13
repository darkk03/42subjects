/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:01:00 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/13 12:01:35 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_lstadd_front its a function that adds the element 
// ’new’ at the beginning of the list

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL && new == NULL)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// t_list *ft_lstnew(void *content){

//     t_list *i;

//     i = (t_list *)malloc(sizeof(t_list));
//     if (i == NULL) {
//         return (NULL);
//     }
//     i->content = content;
//     i->next = NULL;
//     return (i);
// }

// int main() {
//     t_list *list = ft_lstnew("Hello World");
//     t_list *list2 = ft_lstnew("Hello World2");
//     ft_lstadd_front(&list, list2);

//     printf("%p\n", list->content);
//     printf("%p\n", list->next->content);

//     return (0);
// }
