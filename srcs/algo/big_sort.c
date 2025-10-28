/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:36:35 by cluby             #+#    #+#             */
/*   Updated: 2025/10/28 12:02:23 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "list_utils.h"
#include "bigsort.h"
#include "little_sort.h"

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

static int	elems_in_group(int group, t_stack **stack)
{
	t_stack	*tmp;
	int		elems;

	tmp = *stack;
	elems = 0;
	while (tmp)
	{
		if (tmp->group.group == group)
			++elems;
		tmp = tmp->next;
	}
	return (elems);
}

static size_t	find_max(int group, t_stack **b)
{
	t_stack	*tmp;
	size_t	max;

	tmp = *b;
	max = 0;
	while (tmp)
	{
		if (tmp->group.group == group && tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}

void	big_sort(t_stack **a, t_stack **b)
{
	int		currentGroup;
	int		elems;
	size_t	count;
	size_t	id;
	

	while (lst_size((*a)) > 3)
		move_groups(a, b);
	little_sort(a, b);
	currentGroup = (*a)->group.group;
	while (currentGroup && (*b))
	{
		elems = elems_in_group(currentGroup, b);
		while (elems && (*b))
		{
			count = 0;
			id = find_max(currentGroup, b);
			if (currentGroup == (*b)->group.group)
			{
				while ((*b)->index != id && (*b)->group.group == currentGroup)
				{
					if ((*b)->index == id - 1)
						pa(b, a, "pa\n");
					else
						ra(b, "rb\n");
				}
				pa(b, a, "pa\n");
				if ((*a)->group.group == (*a)->next->group.group && (*a)->index == (*a)->next->index + 1)
					sa(a, "sa\n");
			}
			else
			{
				if ((*b)->next)
					rra(b, "rrb\n");
				while ((*b)->index != id && (*b)->group.group == currentGroup)
				{
					if ((*b)->index == id - 1)
						pa(b, a, "pa\n");
					else
						rra(b, "rrb\n");
				}
				pa(b, a, "pa\n");
				if ((*a)->group.group == (*a)->next->group.group && (*a)->index == (*a)->next->index + 1)
					sa(a, "sa\n");
			}
			--elems;
		}
		--currentGroup;
	}
}
