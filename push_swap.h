/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:48:44 by cluby             #+#    #+#             */
/*   Updated: 2024/03/19 13:34:36 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft/libft.h"

int		check_error(const int argc, char **argv, t_list **lst);
void	sa(t_list **lst);
void	rra(t_list **lst);
void	ra(t_list **lst);
void	pb(t_list **stacka, t_list **stackb);
void	sb(t_list **lst);
void	rrb(t_list **lst);
void	rb(t_list **lst);
void	pa(t_list **stackb, t_list **stacka);
void	ss(t_list **stacka, t_list **stackb);
void	rrr(t_list **stacka, t_list **stackb);

#endif