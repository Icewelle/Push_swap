/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:31:47 by cluby             #+#    #+#             */
/*   Updated: 2024/04/12 23:55:00 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_b_till_3(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (ft_lstsize(*stack_a) > 3 && !check_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_list	*ft_sort_b(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) > 3 && !check_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !check_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !check_sorted(*stack_a))
		ft_sort_b_till_3(stack_a, &stack_b);
	if (!check_sorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

t_list	**ft_sort_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->content))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	ft_sort(t_list **stack_a)
{
	t_list	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, ft_min(*stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->content != ft_min(*stack_a))
				ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->content != ft_min(*stack_a))
				rra(stack_a, 0);
		}			
	}	
}