/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafzal < mafzal@student.42warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:37:18 by mafzal            #+#    #+#             */
/*   Updated: 2025/12/22 00:37:19 by mafzal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"


void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int	is_sorted(int *arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			return (0);
	}
	return (1);
}
