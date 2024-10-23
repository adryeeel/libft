/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:13:44 by arocha-b          #+#    #+#             */
/*   Updated: 2024/10/23 23:31:17 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarr.h"

void	ft_strarr_free(t_strarr strarr)
{
	size_t	i;

	i = 0;
	while (i < strarr.length)
		free(strarr.data[i++]);
	free(strarr.data);
}
