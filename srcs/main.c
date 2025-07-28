/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:30:56 by cluby             #+#    #+#             */
/*   Updated: 2025/05/23 14:19:26 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "handle_args.h"
#include "stack.h"
#include "list_utils.h"
#include "little_sort.h"
#include "bigsort.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	if (handle_args(argc, argv))
		return (1);
	stack_a = NULL;
	stack_b = NULL;
	if (create_and_fill(argv, &stack_a))
		return (1);
	put_index(&stack_a);
	little_sort(&stack_a, &stack_b);
	//big_sort(&stack_a, &stack_a);
	/* t_stack *tmp = stack_a;
	while (tmp)
	{
		printf("a : %d | index : %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
	tmp = stack_b;
	while (tmp)
	{
		printf("b : %d\n", tmp->value);
		tmp = tmp->next;
	} */
	free_both(&stack_a, &stack_b);
	/*
	creer stack a
	remplir stack a
	voir si stack a peut deja etre trier
		creer stack b si besoin
	trier tout
	resultat*/
}
