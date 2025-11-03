/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icewell <icewell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:54:15 by icewell           #+#    #+#             */
/*   Updated: 2025/11/03 14:44:04 by icewell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIG_UTILS_H
# define BIG_UTILS_H

# include "stack.h"

int		rr_or_r(t_stack **b, size_t max);
void	rotate_and_push(t_stack **a, t_stack **b, size_t toPush, int rota);

#endif