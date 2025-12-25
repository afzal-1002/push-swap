/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:50:37 by mafzal            #+#    #+#             */
/*   Updated: 2025/12/25 20:53:21 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**split;
	int		*numbers;
	int		size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		split = ft_split(argv[1]);
	else
		split = argv + 1;
	size = list_size(split);
	numbers = prepare_stack(split, &a, size);
	if (!numbers)
		return (1);
	if (has_duplicate(numbers, size))
		return (1);
	assign_index(a, numbers, size);
	radix_sort(&a, &b, size);
	free(numbers);
	return (0);
}
