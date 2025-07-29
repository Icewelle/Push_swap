/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:07:19 by cluby             #+#    #+#             */
/*   Updated: 2025/05/20 10:52:00 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, "");
	rra(stack_b, "");
	write(1, "rrr\n", 4);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, "");
	ra(stack_b, "");
	write(1, "rr\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a, "");
	sa(stack_b, "");
	write(1, "ss\n", 3);
}