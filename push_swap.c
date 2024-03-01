/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:42:41 by cluby             #+#    #+#             */
/*   Updated: 2024/03/01 17:59:07 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*lst;
	t_list	*node;
	int		i;

	if (argc == 1)
		return (0);
	i = argc - 1;
	lst = ft_lstnew(ft_atol(argv[i]));
	while (i > 1)
	{
		node = ft_lstnew(ft_atol(argv[--i]));
		ft_lstadd_front(&lst, node);
	}
	ft_lstiter(lst);
	rra(&lst);
	ft_lstiter(lst);
	if (check_error(argc, argv, &lst))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (0);
}
