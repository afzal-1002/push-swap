#include "../../push_swap.h"

int	list_size(char **split)
{
	int size;

	size = 0;
	while (split[size])
		size++;
	return (size);
}

int	stack_size(t_list *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}
