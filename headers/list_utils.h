/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:50:44 by cluby             #+#    #+#             */
/*   Updated: 2025/05/20 12:57:27 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_UTILS_H
# define LIST_UTILS_H

# include "stack.h"

void	free_stack(t_stack	*stack);
int		lst_size(t_stack *stack);
void	free_both(t_stack **a, t_stack **b);

#endif