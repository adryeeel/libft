/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:20:59 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/27 01:24:45 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SLL_H
# define FT_SLL_H

# include <stdlib.h>

typedef struct s_sll_node
{
	void				*data;
	struct s_sll_node	*next;

}						t_sll_node;

typedef struct s_sll
{
	size_t				size;
	t_sll_node			*head;
	t_sll_node			*tail;

}						t_sll;

void					ft_sll_init(t_sll *self);
void					ft_sll_destroy(t_sll self);
void					ft_sll_swap(t_sll *self, int x, int y);
void					*ft_sll_get(t_sll self, size_t index);
void					*ft_sll_search(t_sll self, void *target,
							int (*f)(void *, void *));
void					ft_sll_delete(t_sll *self, size_t index);
void					ft_sll_map(t_sll self, void (*f)(void *));
void					*ft_sll_pop(t_sll *self);
void					*ft_sll_shift(t_sll *self);
void					ft_sll_push(t_sll *self, void *data);
void					ft_sll_unshift(t_sll *self, void *data);

#endif
