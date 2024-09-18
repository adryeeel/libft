/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:47:32 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 12:48:27 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarr.h"

static void ft_copy(char *dst[], char *src[], size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		dst[i] = ft_strdup(src[i]);
		i++;
	}
}

char **ft_strarr_merge(char *strarr_a[], char *strarr_b[])
{
	size_t len_a;
	size_t len_b;

	char **new;

	len_a = ft_strarr_length(strarr_a);
	len_b = ft_strarr_length(strarr_b);
	new = ft_calloc(len_a + len_b + NULL_BYTE, sizeof(char *));

	if (!new)
		return (NULL);

	ft_copy(new, strarr_a, len_a);
	ft_copy(new + len_a, strarr_b, len_b);
	new[len_a + len_b] = NULL;

	return (new);
}
