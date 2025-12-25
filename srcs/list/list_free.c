/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:52:10 by mafzal            #+#    #+#             */
/*   Updated: 2025/12/25 20:52:11 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	free_stack(t_list *head)
{
	t_list	*tmp;

	while (head)
	{
		tmp = head->next;
		free_node(head);
		head = tmp;
	}
}

void	free_node(t_list *node)
{
	if (node)
		free(node);
}
