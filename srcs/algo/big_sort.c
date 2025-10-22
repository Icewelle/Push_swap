/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:36:35 by cluby             #+#    #+#             */
/*   Updated: 2025/10/23 00:32:06 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "list_utils.h"
#include "bigsort.h"
#include "little_sort.h"

#include <stdio.h>

static int	put_range(t_stack **stack)
{
	t_stack	*tmp;
	size_t	max_range;
	size_t	mid_range;

	tmp = *stack;
	mid_range = (lst_size(tmp) / 3);
	max_range = (lst_size(tmp) / 3 * 2);
	clean_index(stack);
	put_index(stack);
	while (tmp)
	{
		if (tmp->index > max_range)
			tmp->range = max;
		else if (tmp->index > mid_range)
			tmp->range = mid;
		else
			tmp->range = min;
		tmp = tmp->next;
	}
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
		if ((*a)->range == min)
		{
			pa(a, b, "pb\n");
			if (lst_size((*b)) > 1)
				ra(b, "rb\n");
			++min_c;
		}
		else if ((*a)->range == mid)
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
	t_stack	*tmp;

	while (lst_size((*a)) > 3)
		move_groups(a, b);
	little_sort(a, b);
	tmp = *b;
/* 	while (tmp)
	{
		if (tmp->value > (*a)->value)
		{
			pa(b, a, "pa\n");
			ra(a, "ra\n");
		}
		else
			pa(b, a, "pa\n");
		tmp = tmp->next;
	}	 */
}
