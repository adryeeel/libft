/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:13:42 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/19 00:52:30 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarr.h"

size_t	ft_strarr_length(char *strarr[])
{
	size_t	i;

	if (!strarr)
		return (0);
	i = 0;
	while (strarr[i])
		i++;
	return (i);
}
