/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:57:14 by cluby             #+#    #+#             */
/*   Updated: 2024/04/08 16:46:21 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (!lst)
	{
		ft_printf("VIDE\n");
		return ;
	}
	while (temp->next != lst)
	{
		ft_printf("%ld\n", temp->content);
		temp = temp->next;
	}
	ft_printf("%ld\n", temp->content);
}
