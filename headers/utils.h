/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:27:49 by cluby             #+#    #+#             */
/*   Updated: 2025/05/12 14:46:14 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <limits.h>

typedef struct s_varatoi
{
	int	i;
	int	number;
	int	is_negative;
	int	digit;
}	t_varatoi;

int	err(char *str);
int	ft_atoi(const char *str);

#endif