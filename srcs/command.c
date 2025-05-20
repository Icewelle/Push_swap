/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:07:16 by cluby             #+#    #+#             */
/*   Updated: 2025/05/20 11:43:54 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	sa(t_stack	**stack, char *str)
{
	t_stack	*tmp;
	tmp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	tmp->next = *stack;
	*stack = tmp;
	while (*str)
		write(1, str++, 1);
}

void	pa(t_stack **stack_a, t_stack **stack_b, char *str)
{
	t_stack	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_b);
	*stack_b = tmp;
	while (*str)
		write(1, str++, 1);
}

void	rra(t_stack	**stack, char *str)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	tmp->next->next = (*stack);
	*stack = tmp->next;
	tmp->next = NULL;
	while (*str)
		write(1, str++, 1);
}

void	ra(t_stack **stack, char *str)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	tmp2 = *stack;
	while (tmp2->next)
		tmp2 = tmp2->next;
	*stack = tmp->next;
	tmp->next = NULL;
	tmp2->next = tmp;
	while (*str)
		write(1, str++, 1);
}