/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:15:07 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/09 15:47:54 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newnode;

    newnode = malloc(sizeof(t_list));
    if (!newnode)
        return (NULL);
    newnode->content = content;
    newnode->next = NULL;

    return (newnode);
}
/* int main()
{
    t_list *node = ft_lstnew("Hello, World!");
    printf("Content: %s\n", (char *)node->content);
    printf("Next node address: %s\n", (void *)node->next);
    return 0;
} */