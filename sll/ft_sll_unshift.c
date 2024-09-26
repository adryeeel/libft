/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_unshift.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:40:33 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/26 14:32:43 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void ft_sll_unshift(t_sll *self, void *data)
{
	t_sll_node *new_node;

	new_node = (t_sll_node *)malloc(sizeof(t_sll_node));
	if (!new_node)
		return;
	new_node->data = data;
	new_node->next = self->head;
	if (self->size++ == 0)
	{
		self->head = new_node;
		self->tail = new_node;
		return;
	}
	self->head = new_node;
}
