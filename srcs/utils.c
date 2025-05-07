/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:00:57 by cluby             #+#    #+#             */
/*   Updated: 2025/05/07 13:21:18 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"

static int	ft_is_number(char *str)
{
	while (*str)
	{
		if (((unsigned char)*str < 48 || (unsigned char)*str > 57))
			return (1);
		str++;
	}
	return (0);
}

int	ft_is_valid(char *str)
{
	printf("%p\n", str);
	while (((unsigned char)*str == '-' || (unsigned char)*str == '+') && *str)
		str++;
	printf("%p\n", str);
	if (ft_is_number(str))
		return (1);
	return (0);
}

void	err(char *str)
{
	while (*str)
		write(2, str++, 1);
}
