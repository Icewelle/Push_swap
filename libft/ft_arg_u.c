/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:21:23 by cluby             #+#    #+#             */
/*   Updated: 2024/02/19 19:10:42 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arg_u(unsigned int nbr)
{
	unsigned int	len;
	char			*num;

	len = 0;
	num = ft_uitoa(nbr);
	len = ft_printstr(num);
	free(num);
	return (len);
}
