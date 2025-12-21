#include "../../push_swap.h"

void	reset_index(t_list *stack)
{
	while (stack)
	{
		stack->index = -1;
		stack = stack->next;
	}
}

void	assign_index(t_list *a, int *arr, int size)
{
	int	i;

	while (a)
	{
		i = 0;
		while (i < size)
		{
			if (arr[i] == a->value)
			{
				a->index = i;
				break ;
			}
			i++;
		}
		a = a->next;
	}
}
