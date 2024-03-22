/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:57:14 by cluby             #+#    #+#             */
/*   Updated: 2024/03/19 14:26:12 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst /* , void (*f)(long) */ )
{
	t_list	*temp;

	temp = lst;
	if (!lst)
	{
		printf("VIDE\n");
		return ;
	}
	while (temp->next != lst)
	{
		printf("%ld\n", temp->content);
		temp = temp->next;
	}
	printf("%ld\n", temp->content);
}
