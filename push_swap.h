/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:48:44 by cluby             #+#    #+#             */
/*   Updated: 2024/04/08 16:24:58 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft/libft.h"

int		check_error(const int argc, char **argv, t_list **lst);
void	sa(t_list **lst, int i);
void	rra(t_list **lst, int i);
void	ra(t_list **lst, int i);
void	pb(t_list **stacka, t_list **stackb, int i);
void	sb(t_list **lst, int i);
void	rrb(t_list **lst, int i);
void	rb(t_list **lst, int i);
void	pa(t_list **stackb, t_list **stacka, int i);
void	ss(t_list **stacka, t_list **stackb, int i);
void	rrr(t_list **stacka, t_list **stackb, int i);
int		check_sorted(t_list *stack_a);
void	free_stack(t_list **lst);

#endif