/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:39:19 by cluby             #+#    #+#             */
/*   Updated: 2025/05/07 13:12:14 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handle_args.h"

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
