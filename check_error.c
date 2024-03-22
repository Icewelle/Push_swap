/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:33:02 by cluby             #+#    #+#             */
/*   Updated: 2024/03/13 21:55:57 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int(int argc, char **argv)
{
	int	i;

	while (argc-- > 1)
	{
		i = 0;
		if (argv[argc][i] == '-')
			i++;
		while (argv[argc][i])
		{
			if (!ft_isdigit(argv[argc][i]))
				return (TRUE);
			i++;
		}
	}
	return (FALSE);
}

int	check_double(const int argc, t_list *lst)
{
	t_list	*temp;
	t_list	*check;
	int		i;
	int		j;

	temp = lst;
	i = 1;
	while (i < argc - 1)
	{
		check = temp;
		j = argc;
		while (--j > i)
		{
			temp = temp->next;
			if (temp->content == check->content)
				return (TRUE);
		}
		temp = check->next;
		i++;
	}
	return (FALSE);
}

int	check_int_minmax(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp->next != lst)
	{
		if (temp->content > INT_MAX || temp->content < INT_MIN)
			return (TRUE);
		temp = temp->next;
	}
	if (temp->content > INT_MAX || temp->content < INT_MIN)
		return (TRUE);
	return (FALSE);
}

int	check_error(const int argc, char **argv, t_list **lst)
{	
	if (check_int(argc, argv))
		return (TRUE);
	if (check_double(argc, *lst))
		return (TRUE);
	if (check_int_minmax(*lst))
		return (TRUE);
	return (FALSE);
}
