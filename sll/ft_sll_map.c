/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sll_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:37:06 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/27 01:24:33 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sll.h"

void	ft_sll_map(t_sll self, void (*f)(void *))
{
	t_sll_node	*current;

	if (!f)
		return ;
	current = self.head;
	while (current)
	{
		f(current->data);
		current = current->next;
	}
}
