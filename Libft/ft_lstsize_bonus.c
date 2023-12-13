/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:08:39 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/10 13:08:39 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*list;

	if (lst == NULL)
	{
		return (0);
	}
	i = 1;
	list = lst;
	while (list->next != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}

// int main() {
//     t_list *list = NULL;
//     int size = ft_lstsize(list);
//     printf("size -  %d\n", size);
//     return (0);
// }