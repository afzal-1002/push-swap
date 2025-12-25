#include "../../push_swap.h"

int	*prepare_stack(char **split, t_list **a, int size)
{
	int	*numbers;

	numbers = malloc(sizeof(int) * size);
	if (!numbers)
		return (NULL);
	list_fill(split, a, numbers, size);
	quick_sort(numbers, 0, size - 1);
	return (numbers);
}
