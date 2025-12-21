#include "../../push_swap.h"

void	quick_sort(int arr[], int start, int end)
{
	int	i;
	int	j;
	int	pivot;

	if (start >= end)
		return ;
	pivot = arr[end];
	i = start;
	j = start;
	while (i < end)
	{
		if (arr[i] < pivot)
		{
			ft_swap(&arr[i], &arr[j]);
			j++;
		}
		i++;
	}
	ft_swap(&arr[j], &arr[end]);
	quick_sort(arr, start, j - 1);
	quick_sort(arr, j + 1, end);
}
