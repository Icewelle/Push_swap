/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:26:19 by cluby             #+#    #+#             */
/*   Updated: 2024/04/08 16:39:24 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **lst, int i)
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
	*lst = second;
	if (i == 0)
		write(1, "sb\n", 3);
}

void	rrb(t_list **lst, int i)
{
	*lst = (*lst)->previous;
	if (i == 0)
		write(1, "rrb\n", 4);
}

void	rb(t_list **lst, int i)
{
	*lst = (*lst)->next;
	if (i == 0)
		write(1, "rb\n", 3);
}

void	pa(t_list **stackb, t_list **stacka, int i)
{
	t_list	*temp;

	if (!*stackb)
		return ;
	temp = *stackb;
	if ((*stackb)->next == *stackb)
	{
		ft_lstadd_front(stacka, temp);
		*stackb = NULL;
		return ;
	}
	*stackb = (*stackb)->next;
	(*stackb)->previous = (*stackb)->previous->previous;
	(*stackb)->previous->next = *stackb;
	ft_lstadd_front(stacka, temp);
	if (i == 0)
		write(1, "pa\n", 3);
}
