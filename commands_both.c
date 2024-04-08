/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_both.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:26:59 by cluby             #+#    #+#             */
/*   Updated: 2024/04/08 16:39:56 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **stacka, t_list **stackb, int i)
{
	rra(stacka, 1);
	rrb(stackb, 1);
	if (i == 0)
		write(1, "rrr\n", 4);
}

void	ss(t_list **stacka, t_list **stackb, int i)
{
	sa(stacka, 1);
	sb(stackb, 1);
	if (i == 0)
		write(1, "ss\n", 3);
}

void	rr(t_list **stacka, t_list **stackb, int i)
{
	ra(stacka, 1);
	rb(stackb, 1);
	if (i == 0)
		write(1, "rr\n", 3);
}
