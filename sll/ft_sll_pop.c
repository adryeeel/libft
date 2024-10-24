/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:31:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/27 01:23:13 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	*ft_sll_pop(t_sll *self)
{
	void		*data;
	t_sll_node	*new_tail;

	if (!self->size)
		return (NULL);
	if (self->size-- == 1)
	{
		data = self->tail->data;
		free(self->tail);
		self->head = NULL;
		self->tail = NULL;
		return (data);
	}
	new_tail = ft_sll_get(*self, self->size - 2);
	new_tail->next = NULL;
	data = self->tail->data;
	free(self->tail);
	self->tail = new_tail;
	return (data);
}
