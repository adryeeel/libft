/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dequeue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:00:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/26 01:11:35 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

void	*ft_dequeue(t_queue *q)
{
	void	*data;
	t_node	*node;

	if (!q->head)
		return (NULL);
	node = q->head;
	q->head = q->head->next;
	if (!q->head)
		q->tail = NULL;
	q->length--;
	data = node->data;
	free(node);
	return (data);
}
