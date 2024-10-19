/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:33:37 by arocha-b          #+#    #+#             */
/*   Updated: 2024/10/19 15:02:42 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils.h"

size_t ft_parse_format(const char *format, va_list args)
{
	char *format_substr;
	size_t wrote_amount;

	wrote_amount = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format_substr = ft_format_substr(format);
			wrote_amount += ft_parse_substr(format_substr, args);
			format += ft_strlen(format_substr);
			free(format_substr);
			continue;
		}
		wrote_amount += write(STDOUT_FILENO, format, 1);
		format++;
	}
	return (wrote_amount);
}
