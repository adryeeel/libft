/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:50:36 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/26 01:10:31 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

# include "../mem/ft_mem.h"
# include <stdlib.h>

typedef struct s_node
{
	void			*data;
	struct s_node	*next;

}					t_node;

typedef struct s_queue
{
	t_node			*head;
	t_node			*tail;
	size_t			length;

}					t_queue;

void				*ft_dequeue(t_queue *q);
void				ft_queue_free(t_queue *q);
void				ft_queue_init(t_queue *q);
void				ft_enqueue(t_queue *q, void *data);

#endif
