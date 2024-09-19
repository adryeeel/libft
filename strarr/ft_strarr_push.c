/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:14:02 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/19 00:52:01 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:14:02 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:08:57 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarr.h"

static void	ft_copy(char *dst[], char *src[], size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = ft_strdup(src[i]);
		i++;
	}
}

t_strarr	*ft_strarr_push(t_strarr *strarr, char *str)
{
	t_strarr	*new;

	new = ft_strarr_create();
	if (!new)
		return (NULL);
	new->length = strarr->length + 1;
	new->data = ft_calloc(strarr->length + 1 + NULL_BYTE, sizeof(char *));
	if (!new->data)
	{
		free(new);
		return (NULL);
	}
	ft_copy(new->data, strarr->data, strarr->length);
	new->data[strarr->length] = ft_strdup(str);
	return (new);
}
