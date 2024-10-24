/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_getl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by arocha-b          #+#    #+#             */
/*   Updated: 2024/10/24 10:47:53 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buffer.h"

char	*ft_buffer_getl(char *buffer)
{
	char	*line_pos;
	char	*next_line;
	size_t	next_line_len;

	if (!buffer)
		return (NULL);
	line_pos = ft_strchr(buffer, '\n');
	if (!line_pos)
		next_line_len = ft_strlen(buffer);
	else
		next_line_len = line_pos - buffer + 1;
	next_line = ft_calloc(next_line_len + NULL_CHAR, sizeof(char));
	ft_memcpy(next_line, buffer, next_line_len);
	return (next_line);
}
