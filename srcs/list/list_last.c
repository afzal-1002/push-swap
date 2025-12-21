#include "../../push_swap.h"

t_list	*get_last_node(t_list *current)
{
	if (current == NULL)
		return (NULL);
	while (current->next != NULL)
		current = current->next;
	return (current);
}
