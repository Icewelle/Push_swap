/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:36:00 by cluby             #+#    #+#             */
/*   Updated: 2025/05/12 17:27:40 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "utils.h"
#include "list_utils.h"

t_stack	*create_node(int val)
{
	t_stack	*new = malloc(sizeof(t_stack));
	if (!new)
		return (err("Error\n"), NULL);
	new->value = val;
	new->next = NULL;
	return (new);
}

static int	insert_begin(int val, t_stack **stack)
{
	t_stack	*new = create_node(val);
	if (!new)
		return (1);
	new->next = *stack;
	*stack = new;
	return (0);
}

int	create_and_fill(char **argv, t_stack **stack)
{
	++argv;
	while (*argv)
	{
		if (insert_begin(ft_atoi(*argv), stack))
		{
			free_stack(*stack);
			return (1);
		}
		++argv;
	}
	return (0);
}
