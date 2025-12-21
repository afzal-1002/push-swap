#include "../../push_swap.h"

t_list	*append_node(t_list **head, int value)
{
	t_list	*new_node;
	t_list	*temp;

	new_node = create_node(value);
	if (!new_node)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
