/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:13:49 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/10 15:13:49 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

// void pelement(void *content, int i) {
//     printf("Element %d: %d\n", i, *((int *)content));
// }

void ft_lstiter(t_list *lst, void (*f)(void *, int)) {
    if (lst == NULL || f == NULL) {
        return;
    }
    int i = 1;
    while (lst != NULL) {
        f(lst->content, i);
        lst = lst->next;
        i++;
    }
}

// int main() {
//     t_list *list = NULL;

//     for (int i = 5; i > 0; --i) {
//         t_list *nnode = malloc(sizeof(t_list));
//         nnode->content = malloc(sizeof(int));
//         *((int *)nnode->content) = i;
//         nnode->next = list;
//         list = nnode;
//     }

//     ft_lstiter(list, &pelement);

//     return 0;
// }

