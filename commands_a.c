/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:26:19 by cluby             #+#    #+#             */
/*   Updated: 2024/03/19 14:48:54 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **lst)
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

void	rra(t_list **lst)
{
	*lst = (*lst)->previous;
}

void	ra(t_list **lst)
{
	*lst = (*lst)->next;
}

void	pb(t_list **stacka, t_list **stackb)
{
	t_list	*temp;
	
	if (!*stackb)
		return ;
	temp = *stacka;
	*stacka = (*stacka)->next;
	(*stacka)->previous = (*stacka)->previous->previous;
	(*stacka)->previous->next = *stacka;
	if (!*stackb)
	{
		*stackb = temp;
		(*stackb)->next = *stackb;
		(*stackb)->previous = *stackb;
		return;
	} 
	ft_lstadd_front(stackb, temp);
}
