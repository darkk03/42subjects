/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:29:26 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/13 12:38:27 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*next;

	list = *lst;
	if (lst == NULL || del == NULL)
	{
		return ;
	}
	while (list != NULL)
	{
		next = list->next;
		ft_lstdelone(list, del);
		list = next;
	}
	*lst = NULL;
}

/*int	main(void)
{
	t_list	*list;
	t_list	*list2;
	t_list	*list3;

	list = ft_lstnew("Hello World");
	list2 = ft_lstnew("Hello World2");
	list3 = ft_lstnew("Hello World3");
	ft_lstadd_back(&list, list2);
	ft_lstadd_back(&list, list3);
	ft_lstclear(&list, &free);
	return (0);
}*/
