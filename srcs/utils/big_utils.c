#include "big_utils.h"

#include <stdio.h>

int	rr_or_r(t_stack **b, size_t max)
{
	t_stack	*tmp;
	size_t	count;

	tmp = *b;
	count = 0;
	while (tmp)
	{
		if (tmp->index == max)
			break;
		++count;
		tmp = tmp->next;
	}
	if (count < max / 2)
		return (0);
	else
		return (1);
}

void	rotate_and_push(t_stack **a, t_stack **b, size_t toPush, int rota)
{
	while ((*b)->index != toPush)
	{
		if ((*b)->index == toPush - 1)
			pa(b, a, "pa\n");
		if (rota == 0 && (*b)->index != toPush)
			ra(b, "rb\n");
		else if (rota == 1 && (*b)->index != toPush)
			rra(b, "rrb\n");
	}
	pa(b, a, "pa\n");
}
