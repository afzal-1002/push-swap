#include "../../push_swap.h"

void	sort_three(t_list **a)
{
	int first;
	int second;
	int third;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	/* Case 1: 2 1 3 */
	if (first > second && second < third && first < third)
		sa(a);
	/* Case 2: 3 2 1 */
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	/* Case 3: 3 1 2 */
	else if (first > second && second < third && first > third)
		ra(a);
	/* Case 4: 1 3 2 */
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	/* Case 5: 2 3 1 */
	else if (first < second && second > third && first > third)
		rra(a);
}