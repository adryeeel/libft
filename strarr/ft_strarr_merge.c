/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:47:32 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/19 00:53:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarr.h"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:47:32 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 02:12:43 by arocha-b         ###   ########.fr       */
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

t_strarr	*ft_strarr_merge(t_strarr *strarr_a, t_strarr *strarr_b)
{
	t_strarr	*new;

	new = ft_strarr_create();
	if (!new)
		return (NULL);
	new->length = strarr_a->length + strarr_b->length;
	new->data = ft_calloc(new->length + NULL_BYTE, sizeof(char *));
	if (!new->data)
	{
		free(new);
		return (NULL);
	}
	ft_copy(new->data, strarr_a->data, strarr_a->length);
	ft_copy(new->data + strarr_a->length, strarr_b->data, strarr_b->length);
	return (new);
}
