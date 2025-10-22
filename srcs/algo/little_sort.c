/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:36:33 by cluby             #+#    #+#             */
/*   Updated: 2025/10/22 23:02:13 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "list_utils.h"
#include "little_sort.h"

void	sort_three(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a > b && b < c && a < c)
		sa(stack, "sa\n");
	else if (a > b && b > c)
	{
		sa(stack, "sa\n");
		rra(stack, "rra\n");
	}
	else if (a > b && b < c && a > c)
		ra(stack, "ra\n");
	else if (a < b && b > c && a < c)
	{
		sa(stack, "sa\n");
		ra(stack, "ra\n");
	}
	else if (a < b && b > c && a > c)
		rra(stack, "rra\n");
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	i;

	i = 2;
	while (i--)
	{
		while ((*a)->index != 1 && (*a)->index != 2)
		{
			ra(a, "ra\n");
		}
		pa(a, b, "pb\n");
	}
	sort_three(a);
	pa(b, a, "pa\n");
	pa(b, a, "pa\n");
	if ((*a)->index > (*a)->next->index)
		sa(a, "sa\n");
}

int	little_sort(t_stack **a, t_stack **b)
{
	if (lst_size(*a) == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a, "sa\n");
		return (0);
	}
	else if (lst_size(*a) == 3)
	{
		sort_three(a);
		return (0);
	}
	else if (lst_size(*a) == 5)
	{
		sort_five(a, b);
		return (0);
	}
	return (1);
}
