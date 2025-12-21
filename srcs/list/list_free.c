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
