/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:30:56 by cluby             #+#    #+#             */
/*   Updated: 2025/05/09 14:44:19 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "handle_args.h"
#include "stack.h"

int	main(int argc, char **argv)
{
	//t_stack	*stack_a;

	if (handle_args(argc, argv))
		return (err("Error\n"));
	printf("%d\n", ft_atoi(argv[1]));
	/*
	creer stack a
	remplir stack a
	voir si stack a peut deja etre trier
		creer stack b si besoin
	trier tout
	resultat*/
}
