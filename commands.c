/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:26:19 by cluby             #+#    #+#             */
/*   Updated: 2024/03/01 18:10:37 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *lst)
{
	long	temp;
	
	temp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = temp;
}

void	rra(t_list **lst)
{
	t_list	*test;

	test = ft_lstnew(ft_lstlast(*lst)->content);
	ft_lstadd_front(lst, test);
	
}