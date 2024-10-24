/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:39:08 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/27 01:22:50 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	*ft_sll_shift(t_sll *self)
{
	void	*data;

	if (!self->size)
		return (NULL);
	if (self->size-- == 1)
	{
		data = self->head->data;
		free(self->head);
		self->head = NULL;
		self->tail = NULL;
		return (data);
	}
	data = self->head->data;
	free(self->head);
	self->head = self->head->next;
	return (data);
}
