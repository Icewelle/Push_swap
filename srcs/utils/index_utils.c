/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 07:05:08 by icewell           #+#    #+#             */
/*   Updated: 2025/10/23 00:04:30 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "list_utils.h"

void	clean_index(t_stack	**stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		tmp->index = 0;
		tmp = tmp->next;
	}
}

size_t	find_min(t_stack **stack)
{
	t_stack	*tmp;
	size_t	min;

	tmp = *stack;
	min = tmp->value;
	while (tmp)
	{
		if ((size_t)tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

size_t	find_max(t_stack **stack)
{
	t_stack	*tmp;
	size_t	max;

	tmp = *stack;
	max = tmp->value;
	while (tmp)
	{
		if ((size_t)tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

void	put_index(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*min_node;
	size_t	i;
	int		min_val;

	i = 1;
	tmp = *stack;
	min_node = tmp;
	while (i <= lst_size(tmp))
	{
		min_val = INT_MAX;
		while (tmp)
		{
			if ((tmp->value < min_val || (tmp->value == INT_MAX \
				&& i == lst_size(*stack))) && tmp->index == 0)
			{
				min_val = tmp->value;
				min_node = tmp;
			}
			tmp = tmp->next;
		}
		tmp = *stack;
		min_node->index = i++;
	}
}
