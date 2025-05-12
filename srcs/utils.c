/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:00:57 by cluby             #+#    #+#             */
/*   Updated: 2025/05/12 14:45:58 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"



int	err(char *str)
{
	while (*str)
		write(2, str++, 1);
	return (1);
}

static void	init_vars(t_varatoi *vars)
{
	vars->digit = 0;
	vars->i = 0;
	vars->is_negative = 1;
	vars->number = 0;
}

int	ft_atoi(const char *str)
{
	t_varatoi	vars;

	init_vars(&vars);
	while ((str[vars.i] >= 9 && str[vars.i] <= 13) || str[vars.i] == 32)
		vars.i++;
	if (str[vars.i] == '-' || str[vars.i] == '+')
	{
		if (str[vars.i] == '-')
			vars.is_negative *= -1;
		vars.i++;
	}
	while (str[vars.i] >= 48 && str[vars.i] <= 57)
	{
		vars.digit = str[vars.i] - 48;
		if (vars.is_negative == 1 && (vars.number > (INT_MAX - vars.digit) \
		/ 10))
			return (INT_MAX);
		if (vars.is_negative == -1 && (-vars.number < (INT_MIN + vars.digit) \
		/ 10))
			return (INT_MIN);
		vars.number = vars.number * 10 + (str[vars.i] - 48);
		vars.i++;
	}
	return (vars.number * vars.is_negative);
}
