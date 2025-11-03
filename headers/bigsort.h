/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icewell <icewell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:00:17 by cluby             #+#    #+#             */
/*   Updated: 2025/11/03 13:53:52 by icewell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGSORT_H
# define BIGSORT_H

# include "little_sort.h"
# include "stack.h"
# include "list_utils.h"
# include "big_utils.h"

void	big_sort(t_stack **stack_a, t_stack **stack_b);

#endif