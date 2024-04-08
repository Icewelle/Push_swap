/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:26:19 by cluby             #+#    #+#             */
/*   Updated: 2024/04/08 16:38:39 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **lst, int i)
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
		write(1, "sa\n", 3);
}

void	rra(t_list **lst, int i)
{
	*lst = (*lst)->previous;
	if (i == 0)
		write(1, "rra\n", 4);
}

void	ra(t_list **lst, int i)
{
	*lst = (*lst)->next;
	if (i == 0)
		write(1, "ra\n", 3);
}

void	pb(t_list **stacka, t_list **stackb, int i)
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
		return ;
	}
	ft_lstadd_front(stackb, temp);
	if (i == 0)
		write(1, "pb\n", 3);
}
