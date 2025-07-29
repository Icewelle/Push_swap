/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icewell <icewell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:50:44 by cluby             #+#    #+#             */
/*   Updated: 2025/07/29 07:19:41 by icewell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_UTILS_H
# define LIST_UTILS_H

# include "stack.h"
# include <limits.h>

void	free_stack(t_stack	*stack);
size_t	lst_size(t_stack *stack);
void	free_both(t_stack **a, t_stack **b);
void	put_index(t_stack **stack);
t_stack	*lst_last(t_stack *stack);

#endif