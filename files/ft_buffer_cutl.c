/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_cutl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:50 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/19 13:20:19 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buffer.h"

void	ft_buffer_cutl(char **buffer)
{
	char	*nl_pos;
	char	*new_buffer;
	size_t	delete_size;
	size_t	new_buffer_len;

	nl_pos = ft_strchr(*buffer, '\n');
	if (!nl_pos)
		delete_size = ft_strlen(*buffer);
	else
		delete_size = nl_pos - (*buffer) + 1;
	new_buffer_len = ft_strlen(*buffer) - delete_size + NULL_CHAR;
	new_buffer = ft_calloc(new_buffer_len, sizeof(char));
	ft_memmove(new_buffer, buffer + delete_size, new_buffer_len);
	free(*buffer);
	*buffer = new_buffer;
}
