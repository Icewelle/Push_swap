/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:42:41 by cluby             #+#    #+#             */
/*   Updated: 2024/03/19 14:31:35 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stacka;
	t_list	*stackb;
	t_list	*node;
	int		i;

 	if (argc == 1)
		return (0);
	i = argc - 1;
	stacka = ft_lstnew(ft_atol(argv[i]));
	while (i > 1)
	{
		node = ft_lstnew(ft_atol(argv[--i]));
		if (!node)
			return (0);
		ft_lstadd_front(&stacka, node);
	}
	
	if (check_error(argc, argv, &stacka))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	stackb = NULL;
	
	
	//ft_lstclear(&lst, );
	return (0);
}
