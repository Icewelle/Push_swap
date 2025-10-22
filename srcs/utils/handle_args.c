/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:39:19 by cluby             #+#    #+#             */
/*   Updated: 2025/10/22 23:05:45 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handle_args.h"

static int	ft_is_number(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (((unsigned char)*str < 48 || (unsigned char)*str > 57))
			return (1);
		str++;
	}
	return (0);
}

static int	ft_is_valid(char *str)
{
	while (((unsigned char)*str == '-' || (unsigned char)*str == '+') && *str)
		str++;
	if (ft_is_number(str))
		return (1);
	return (0);
}

static int	ft_is_double(char **str)
{
	int	i;

	while (*str)
	{
		i = 1;
		while (str[i])
		{
			if (ft_atoi(str[i]) == ft_atoi(*str))
				return (1);
			++i;
		}
		++str;
	}
	return (0);
}

int	handle_args(int argc, char **argv)
{
	char	**clone;

	if (argc < 2)
		return (1);
	argv++;
	clone = argv;
	while (*argv)
	{
		if (ft_is_valid(*argv))
			return (err("Error\n"));
		argv++;
	}
	if (ft_is_double(clone))
		return (err("Error\n"));
	return (0);
}
