/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:28:58 by cluby             #+#    #+#             */
/*   Updated: 2024/03/09 15:54:31 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	temp = ft_lstlast(temp);
	temp->next = new;
	new->previous = temp;
}

/* int main()
{	
	t_list *head = ft_lstnew("test");
	t_list *node2 = ft_lstnew("test2");
	t_list *node3 = ft_lstnew("last");

	head->next = node2;
	ft_lstadd_back(&head, node3);
	return (0);
} */