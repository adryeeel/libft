/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:14:02 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 12:27:48 by arocha-b         ###   ########.fr       */
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

char **ft_strarr_push(char *strarr[], char *str)
{
	size_t len;
	char **new;

	len = ft_strarr_length(strarr);
	new = ft_calloc(len + 2, sizeof(char *));

	if (!new)
		return (NULL);

	ft_copy(new, strarr, len);
	new[len] = ft_strdup(str);
	new[len + 1] = NULL;

	return (new);
}
