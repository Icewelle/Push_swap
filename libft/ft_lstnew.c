/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:30:07 by cluby             #+#    #+#             */
/*   Updated: 2024/02/19 17:58:10 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(long content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (new_element)
	{
		new_element->content = content;
		new_element->next = NULL;
	}
	return (new_element);
}
