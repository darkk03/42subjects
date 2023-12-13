/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:50:52 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/10 13:50:52 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_lstadd_front(t_list **lst, t_list *new) {
//     if (lst == NULL && new == NULL) {
//         return ;
//     }

//     new->next = *lst;
//     *lst = new;
// }

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*list;

	if (lst == NULL)
	{
		return (NULL);
	}
	list = lst;
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}

// t_list *ft_lstnew(void *content)
// {
//     t_list *i = (t_list *)malloc(sizeof(t_list));
//     if (i == NULL) {
//         return (NULL);
//     }
//     i->content = content;
//     i->next = NULL;
//     return (i);
// }

// int main() {
//     t_list *list = NULL;
//     t_list *list2 = ft_lstnew("Hello World2");
//     t_list *list3 = ft_lstnew("Hello World3");
//     ft_lstadd_front(&list, list2);
//     ft_lstadd_front(&list, list3);
//     t_list *last = ft_lstlast(list);
//     printf("%s\n", (char*)last->content);
//     return (0);
// }