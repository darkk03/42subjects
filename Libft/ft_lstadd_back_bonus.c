/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:14:18 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/10 14:14:18 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (lst == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	list = *lst;
	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;
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
//     t_list *list = NULL;
//     t_list *list2 = ft_lstnew("Hello World2");
//     t_list *list3 = ft_lstnew("Hello World3");
//     ft_lstadd_back(&list, list2);
//     ft_lstadd_back(&list, list3);
//     printf("%s\n", (char*)list->content);
//     printf("%s\n", (char*)list->next->content);
//     return (0);
// }