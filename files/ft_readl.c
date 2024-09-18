/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:37:14 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/19 00:12:50 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_files.h"

static void	ft_strmcat(char **dst, char *src)
{
	char	*tmp;

	tmp = ft_strjoin(*dst, src);
	free(*dst);
	*dst = tmp;
}

char	*ft_readl(int fd)
{
	char	*line;
	char	*buffer;
	int		bytes_read;

	if (fd < 0)	
		return (NULL);
	buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	line = ft_calloc(NULL_BYTE, sizeof(char));
	if (!buffer || !line)
		return (NULL);
	while (!ft_strchr(buffer, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE - NULL_BYTE);
		if (bytes_read <= 0)
		{
			free(line);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		ft_strmcat(&line, buffer);
	}
	free(buffer);
	return (line);
}
