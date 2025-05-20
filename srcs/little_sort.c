/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:36:33 by cluby             #+#    #+#             */
/*   Updated: 2025/05/20 12:56:28 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "list_utils.h"
#include "little_sort.h"

void	sort_three(t_stack **stack)
{
	int a = (*stack)->value;
    int b = (*stack)->next->value;
    int c = (*stack)->next->next->value;
	
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

void	little_sort(t_stack **a)
{
	if (lst_size(*a) == 1)
		return;
	else if (lst_size(*a) == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a, "sa\n");
		return;
	}
	else if (lst_size(*a) > 3)
		return;
	sort_three(a);
}