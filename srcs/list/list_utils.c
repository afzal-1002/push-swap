#include "../../push_swap.h"

t_list	*get_node_by_index(t_list *head, int index)
{
	while (head)
	{
		if (head->index == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

t_list	*find_node_by_value(t_list *head, int value)
{
	while (head)
	{
		if (head->value == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}
