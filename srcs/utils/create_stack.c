/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:36:00 by cluby             #+#    #+#             */
/*   Updated: 2025/11/07 12:31:49 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "utils.h"
#include "list_utils.h"

t_stack	*create_node(int val)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (err("Error\n"), NULL);
	new->value = val;
	new->index = 0;
	new->group.group = 0;
	new->group.order = start;
	new->next = NULL;
	return (new);
}

static int	insert_end(int val, t_stack **stack)
{
	t_stack	*new;
	t_stack	*tmp;

	new = create_node(val);
	if (!new)
		return (1);
	if (!*stack)
	{
		*stack = new;
		return (0);
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (0);
}

int	create_and_fill(char **argv, t_stack **stack)
{
	++argv;
	while (*argv)
	{
		if (insert_end(ft_atoi(*argv).number, stack))
		{
			free_stack(*stack);
			return (1);
		}
		++argv;
	}
	return (0);
}
