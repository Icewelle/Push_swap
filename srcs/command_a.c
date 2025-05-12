/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:07:16 by cluby             #+#    #+#             */
/*   Updated: 2025/05/12 17:34:52 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "stack.h"

void	sa(t_stack	**stack)
{
	t_stack	*tmp;
	printf("1: %p\n2: %p\n", (*stack), (*stack)->next);
	tmp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	tmp->next = *stack;
	*stack = tmp;
	write(1, "sa\n", 3);
	printf("1: %p\n2: %p\n\n", (*stack), (*stack)->next);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	printf("a: %p\nb: %p\n", (*stack_a), (*stack_b));
	if (*stack_b == NULL)
    	return;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_b);
	*stack_b = tmp;
	write(1, "pa\n", 3);
	printf("a: %p\nb: %p\n\n", (*stack_a), (*stack_b));

}

void	rra(t_stack	**stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	printf("1: %p\nlast: %p\n", (*stack), tmp->next);
	tmp->next->next = (*stack);
	*stack = tmp->next;
	tmp->next = NULL;
	write(1, "rra\n", 4);
	printf("1: %p\n2: %p\n\n", (*stack), (*stack)->next);
}

void	ra(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while ((*stack)->next)
	{
		(*stack) = (*stack)->next;
	}
	printf("1: %p\n2: %p\n\n", tmp, (*stack));
}