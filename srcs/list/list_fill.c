#include "../../push_swap.h"

void	list_fill(char **split, t_list **stack_a, int numbers[], int size)
{
	int		i;
	int		num;
	t_list	*a;

	a = *stack_a;
	i = 0;
	while (i < size)
	{
		num = ft_atoi(split[i]);
		numbers[i] = num;
		append_node(&a, num);
		i++;
	}
	*stack_a = a;
}
