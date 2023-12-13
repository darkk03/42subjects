/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:22:00 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/10 14:22:00 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
	{
		return ;
	}
	if (lst->content)
	{
		del(lst->content);
		lst->content = NULL;
	}
	lst->next = NULL;
	free(lst);
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
//     ft_lstdelone(list, &free);
//     return (0);
// }