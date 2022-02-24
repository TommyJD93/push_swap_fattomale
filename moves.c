/*
ss : sa and sb at the same time.

ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.

rb : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1. The last element
becomes the first one.

rrb : reverse rotate b - shift down all elements of stack b by 1. The last element
becomes the first one.

rrr : rra and rrb at the same time.
*/

#include "push_swap.h"

void	swap_a(int *stack_a)
{
	int	temp;

	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
}

void	swap_b(int *stack_b)
{
	int	temp;

	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
}

int	*push_a(int *stack_a, int *stack_b)
{
	int	len;
	int	*new_stack;
	int	i;
	int	j;

	len = length(stack_a) + 1;
	new_stack = (int *)malloc(sizeof(int *) * len);
	if (!new_stack)
		return (0);
	new_stack[0] = stack_b[0];
	i = 1;
	j = 0;
	while (new_stack[i])
	{
		new_stack[i] = stack_a[j];
		i++;
		j++;
	}
	free(stack_a);
	return (new_stack);
}

int	*push_b(int *stack_a, int *stack_b)
{
	int	len;
	int	*new_stack;
	int	i;
	int	j;

	len = length(stack_b) + 1;
	new_stack = (int*)malloc(sizeof(int) * len);
	if (!new_stack)
		return (0);
	new_stack[0] = stack_a[0];
	i = 1;
	j = 0;
	while (new_stack[i])
	{
		new_stack[i] = stack_b[j];
		i++;
		j++;
	}
	free(stack_b);
	return (new_stack);
}