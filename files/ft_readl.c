/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:36:24 by arocha-b          #+#    #+#             */
/*   Updated: 2024/10/24 10:48:54 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buffer.h"

char	*ft_readl(int fd)
{
	int			read_bytes;
	char		*next_line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	if (!buffer)
	{
		buffer = ft_calloc(BUFFER_SIZE + NULL_CHAR, sizeof(char));
		if (!buffer)
			return (NULL);
	}
	read_bytes = ft_buffer_readl(fd, &buffer);
	if ((read_bytes < 0) || (read_bytes == 0 && !*buffer))
	{
		free(buffer);
		return (NULL);
	}
	next_line = ft_buffer_getl(buffer);
	ft_buffer_cutl(&buffer);
	return (next_line);
}
