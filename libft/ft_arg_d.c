/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:13:11 by cluby             #+#    #+#             */
/*   Updated: 2024/02/19 19:10:15 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arg_d(int decimal)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(decimal);
	len = ft_printstr(num);
	free(num);
	return (len);
}
