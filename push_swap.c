#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**split;
	int		*numbers;
	int		total_number;
	int		i;
	int		num;
	int		max_bits;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		split = ft_split(argv[1]);
	else
		split = argv + 1;
	total_number = 0;
	while (split[total_number])
		total_number++;
	numbers = malloc(sizeof(int) * total_number);
	if (!numbers)
		return (1);
	i = 0;
	while (i < total_number)
	{
		num = ft_atoi(split[i]);
		numbers[i] = num;
		append_node(&a, num);
		i++;
	}
	/* -------- ALREADY SORTED -------- */
	if (is_sorted(numbers, total_number))
		return (0);
	/* -------- SMALL CASES -------- */
	if (total_number == 2)
	{
		if (a->value > a->next->value)
			sa(&a);
		return (0);
	}
	if (total_number == 3)
	{
		sort_three(&a);
		return (0);
	}
	/* -------- RADIX SORT -------- */
	assign_index(a, numbers, total_number);
	max_bits = get_max_bits(total_number - 1);
	radix_sort(&a, &b, total_number, max_bits);
	return (0);
}
