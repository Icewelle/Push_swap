/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:39:19 by cluby             #+#    #+#             */
/*   Updated: 2025/05/12 14:46:10 by cluby            ###   ########.fr       */
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

int	handle_args(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	argv++;
	while (*argv)
	{
		if (ft_is_valid(*argv))
			return (1);
		argv++;
	}
	return (0);
}
