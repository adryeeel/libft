/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:04:33 by arocha-b          #+#    #+#             */
/*   Updated: 2024/10/24 10:49:56 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//! Internal functions. Do not #include.

#ifndef FT_BUFFER_H
# define FT_BUFFER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include "../mem/ft_mem.h"
# include "../string/ft_string.h"
# include <fcntl.h>
# include <unistd.h>

void	ft_buffer_cutl(char **buffer);
char	*ft_buffer_getl(char *buffer);
int		ft_buffer_readl(int fd, char **buffer);

#endif
