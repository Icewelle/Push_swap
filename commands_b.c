/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:26:19 by cluby             #+#    #+#             */
/*   Updated: 2024/03/19 14:48:34 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **lst)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;
	t_list	*third;
	
	first = *lst;
	if (first->next == first || !first)
		return ;
	second = (*lst)->next;
	last = (*lst)->previous;
	third = second->next;

	if (second->next == first)
	{
		*lst = second;
		return ;
	}
	first->next = second->next;
    second->previous = first->previous;
    second->next = first;
    first->previous = second;
	last->next = second;
	third->previous = first;
    // Update head to point to the new first node
    *lst = second;
}

void	rrb(t_list **lst)
{
	*lst = (*lst)->previous;
}

void	rb(t_list **lst)
{
	*lst = (*lst)->next;
}

void	pa(t_list **stackb, t_list **stacka)
{
	t_list	*temp;
	
	if (!*stackb)
		return ;
	temp = *stackb;
	if ((*stackb)->next == *stackb)
	{
		ft_lstadd_front(stacka, temp);
		*stackb = NULL;
		return;
	}
	*stackb = (*stackb)->next;
	(*stackb)->previous = (*stackb)->previous->previous;
	(*stackb)->previous->next = *stackb;
	ft_lstadd_front(stacka, temp);
}
