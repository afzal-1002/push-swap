#include "../../push_swap.h"

void	reset_index(t_list *stack)
{
	while (stack)
	{
		stack->index = -1;
		stack = stack->next;
	}
}
void	assign_index(t_list *a, int *sorted, int size)
{
	int		i;
	t_list	*cur;

	cur = a;
	while (cur)
	{
		i = 0;
		while (i < size && sorted[i] != cur->value)
			i++;
		if (i == size)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		cur->index = i;
		cur = cur->next;
	}
}
