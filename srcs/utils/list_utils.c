/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icewell <icewell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:50:16 by cluby             #+#    #+#             */
/*   Updated: 2025/07/31 11:20:40 by icewell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "list_utils.h"

void	free_stack(t_stack	*stack)
{
	t_stack	*tmp;
	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

void	free_both(t_stack **a, t_stack **b)
{
	free_stack(*a);
	free_stack(*b);
}

size_t	lst_size(t_stack *stack)
{
	int	i;
	t_stack *tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		++i;
	}
	return (i);
}

t_stack	*lst_last(t_stack *stack)
{
	while (stack && stack->next)
        stack = stack->next;
    return stack;
}
