/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:30:56 by cluby             #+#    #+#             */
/*   Updated: 2025/05/12 17:36:02 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "handle_args.h"
#include "stack.h"
#include "list_utils.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (handle_args(argc, argv))
		return (err("Error\n"));
	stack_a = NULL;
	stack_b = NULL;
	if (create_and_fill(argv, &stack_a))
		return (1);
	create_and_fill(argv, &stack_b);
	sa(&stack_a);
	pa(&stack_a, &stack_b);
	rra(&stack_a);
	//ra(&stack_a);
	t_stack *tmp = stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	free_stack(stack_a);
	free_stack(stack_b);
	/*
	creer stack a
	remplir stack a
	voir si stack a peut deja etre trier
		creer stack b si besoin
	trier tout
	resultat*/
}
