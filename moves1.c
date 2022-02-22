/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:27:29 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/22 15:07:32 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*rotate_a(int *stack_a)
{
	int	tmp;
	int	i;
	int	*new_stack;
	int	j;

	tmp = stack_a[0];
	new_stack = (int*)malloc(sizeof(int*) * length(stack_a));
	if (!new_stack)
		return (0);
	write(1, "a\n", 2);
	i = length(stack_a);
	j = i - 1;
	new_stack[i] = tmp;
	while (stack_a[i] && new_stack[j])
	{
		new_stack[j] = stack_a[i];
		i--;
		j--;
	}
	write(1, "b\n", 2);
	return (new_stack);
}

int main(void)
{
	int asd[5] =  {1,2,3,4};
	int *asd1;
	int i = 0;

	asd1 = rotate_a(asd);
	write(1, "c\n", 2);
	while (asd1[i])
	{
		printf("[%d]: %d\n", i, asd1[i]);
		i++;
	}
}