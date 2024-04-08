/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:42:41 by cluby             #+#    #+#             */
/*   Updated: 2024/04/08 16:37:12 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(int argc, char *argv[], t_list **stack)
{
	int		i;
	t_list	*node;

	i = argc - 1;
	*stack = ft_lstnew(ft_atol(argv[i]));
	while (i > 1)
	{
		node = ft_lstnew(ft_atol(argv[--i]));
		if (!node)
			return ;
		ft_lstadd_front(stack, node);
	}
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;

	if (argc == 1)
		return (0);
	create_stack(argc, argv, &stack_a);
	if (check_error(argc, argv, &stack_a))
	{
		free_stack(&stack_a);
		write(2, "Error\n", 6);
		return (0);
	}
	if (!check_sorted(stack_a))
		sort(&stack_a);
	free_stack(&stack_a);
	return (0);
}
