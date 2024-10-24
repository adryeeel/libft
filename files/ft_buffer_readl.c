/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_readl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:53 by arocha-b          #+#    #+#             */
/*   Updated: 2024/10/24 10:48:20 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buffer.h"

static void	ft_strmcat(char **s1, char *s2)
{
	char	*cat_str;
	size_t	cat_len;

	cat_len = ft_strlen(*s1) + ft_strlen(s2);
	cat_str = ft_calloc(cat_len + NULL_CHAR, sizeof(char));
	if (!cat_str)
		return ;
	ft_memmove(cat_str, *s1, ft_strlen(*s1));
	ft_memmove(cat_str + ft_strlen(*s1), s2, ft_strlen(s2));
	free(*s1);
	*s1 = cat_str;
}

int	ft_buffer_readl(int fd, char **buffer)
{
	int		read_bytes;
	char	*read_buffer;

	read_buffer = ft_calloc(BUFFER_SIZE + NULL_CHAR, sizeof(char));
	if (!read_buffer)
		return (-1);
	while (!ft_strchr(read_buffer, '\n'))
	{
		read_bytes = read(fd, read_buffer, BUFFER_SIZE);
		if (read_bytes <= 0)
			break ;
		read_buffer[read_bytes] = '\0';
		ft_strmcat(buffer, read_buffer);
	}
	free(read_buffer);
	return (read_bytes);
}
