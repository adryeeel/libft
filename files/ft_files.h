/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:04:33 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/19 00:10:39 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILES_H
#define FT_FILES_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 2
#endif

#include <fcntl.h>
#include <unistd.h>

#include "../mem/ft_mem.h"
#include "../string/ft_string.h"

char *ft_readl(int fd);

#endif
