/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:39:26 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/11 10:34:52 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/* int main() {
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");

    t_list *head = NULL;

    ft_lstadd_front(&head, node1);

    if (head != NULL) {
        printf("Content of the first node: %s\n", (char*)head->content);
    } else {
        printf("List is empty.\n");
    }

    ft_lstadd_front(&head, node2);
    if (head != NULL) {
        printf("Content of the first node: %s\n", (char*)head->content);
    } else {
        printf("List is empty.\n");
    }

    return 0;
}
 */