/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:35:15 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/26 14:33:28 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void ft_sll_push(t_sll *self, void *data)
{
	t_sll_node *new_node;

	new_node = (t_sll_node *)malloc(sizeof(t_sll_node));
	if (!new_node)
		return;
	new_node->next = NULL;
	new_node->data = data;
	if (self->size++ == 0)
	{
		self->head = new_node;
		self->tail = new_node;
		return;
	}
	self->tail->next = new_node;
	self->tail = new_node;
}
