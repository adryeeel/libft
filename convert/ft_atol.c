/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:33:33 by arocha-b          #+#    #+#             */
/*   Updated: 2024/10/24 10:46:31 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ctype/ft_ctype.h"
#include "ft_convert.h"

long	ft_atol(const char *nptr)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while (*nptr && ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		sign = -sign;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && ft_isdigit(*nptr))
	{
		num = (num * 10) + *nptr - '0';
		nptr++;
	}
	return (num * sign);
}
