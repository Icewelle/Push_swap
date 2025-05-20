/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:36:24 by cluby             #+#    #+#             */
/*   Updated: 2025/05/20 10:55:39 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

int		create_and_fill(char **argv, t_stack **stack);
void	sa(t_stack	**stack, char *str);
void	pa(t_stack **stack_a, t_stack **stack_b, char *str);
void	ra(t_stack **stack, char *str);
void	rra(t_stack	**stack, char *str);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif