/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:19:18 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/26 14:20:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void *ft_sll_search(t_sll *self, void *data)
{
	t_sll_node	*current_node;

	current_node = self->head;
	while (current_node != NULL)
	{
		if (current_node->data == data)
			return (current_node->data);
		current_node = current_node->next;
	}
	return (NULL);
}
