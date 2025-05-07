/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:30:56 by cluby             #+#    #+#             */
/*   Updated: 2025/05/07 11:27:22 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "handle_args.h"

int	main(int argc, char **argv)
{
	if (handle_args(argc, argv))
		return (err("Error\n"), 1);
	
	//printf("is ok");
	/*
	creer stack a
	remplir stack a
	voir si stack a peut deja etre trier
		creer stack b si besoin
	trier tout
	resultat*/
}
