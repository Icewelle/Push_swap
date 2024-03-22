/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:48:52 by cluby             #+#    #+#             */
/*   Updated: 2024/03/13 21:37:33 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	new->previous = (*lst)->previous;
	(*lst)->previous = new;
	new->previous->next = new;
	
	*lst = new;
}

/* int main()
{
	t_list *head = ft_lstnew("test");
	t_list *node2 = ft_lstnew("test2");
	t_list *node3 = ft_lstnew("head");

	head->next = node2;
	ft_lstadd_front(&head, node3);
	printf("%s\n", (char*)head->content);
	return (0);
} */
