/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:04:49 by cluby             #+#    #+#             */
/*   Updated: 2024/02/19 19:10:22 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arg_i(int decimal)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(decimal);
	len = ft_printstr(num);
	free(num);
	return (len);
}
