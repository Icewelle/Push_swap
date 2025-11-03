/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icewell <icewell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:36:35 by cluby             #+#    #+#             */
/*   Updated: 2025/11/03 14:53:11 by icewell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigsort.h"

#include <stdio.h>

static void	assign_groups(t_stack **stack, size_t mid_range, size_t max_range)
{
	t_stack		*tmp;
	static int	i = 1;
	
	tmp = *stack;
	while (tmp)
	{
		if (tmp->index > max_range)
		{
			tmp->group.order = max;
			tmp->group.group = i + 2;
		}
		else if (tmp->index > mid_range)
		{
			tmp->group.order = mid;
			tmp->group.group = i + 1;
		}
		else
		{
			tmp->group.order = min;
			tmp->group.group = i;
		}
		tmp = tmp->next;
	}
	i += 2;
}

static int	put_range(t_stack **stack)
{
	t_stack		*tmp;
	size_t		max_range;
	size_t		mid_range;

	tmp = *stack;
	mid_range = (lst_size(tmp) / 3);
	max_range = (lst_size(tmp) / 3 * 2);
	clean_index(stack);
	put_index(stack);
	assign_groups(stack, mid_range, max_range);
	return (mid_range);
}

static void	move_groups(t_stack **a, t_stack **b)
{
	int	min_c;
	int	mid_c;
	int	moves;

	moves = put_range(a);
	min_c = 0;
	mid_c = 0;
	while (min_c != moves || mid_c != moves)
	{
		if ((*a)->group.order == min)
		{
			pa(a, b, "pb\n");
			if (lst_size((*b)) > 1)
				ra(b, "rb\n");
			++min_c;
		}
		else if ((*a)->group.order == mid)
		{
			pa(a, b, "pb\n");
			++mid_c;
		}
		else
			ra(a, "ra\n");
	}
}

void	big_sort(t_stack **a, t_stack **b)
{
	size_t	elems;
	
	while (lst_size((*a)) > 3)
		move_groups(a, b);
	little_sort(a, b);
	clean_index(b);
	put_index(b);
	elems = lst_size((*b));
	cheat_index(a, elems);
	while (elems)
	{
		rotate_and_push(a, b, elems, rr_or_r(b, elems));
		if ((*a)->index > (*a)->next->index)
			sa(a, "sa\n");
		elems = lst_size((*b));
	}
}
