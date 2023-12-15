/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:39:02 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/15 16:26:41 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_lst_head;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst == NULL)
		return (NULL);
	new_lst_head = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		if (new_lst->next == NULL)
		{
			ft_lstclear(&new_lst_head, del);
			return (NULL);
		}
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (new_lst_head);
}
