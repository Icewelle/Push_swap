/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:45:33 by cluby             #+#    #+#             */
/*   Updated: 2024/03/27 14:07:49 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **lst)
{
	t_list	*tmp;
	t_list  *first_node;

	first_node = *lst;
	if (!lst)
		return ;
	while ((*lst)->next != first_node)
	{
		tmp = (*lst)->next;
		(*lst)->content = 0;
		free(*lst);
		*lst = tmp;
	}
	tmp = (*lst)->next;
	(*lst)->content = 0;
	free(*lst);
}
