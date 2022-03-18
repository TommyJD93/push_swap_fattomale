/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_mv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:18:15 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/18 11:22:53 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mv_to_b(int *stack_a, int *stack_b, int *len, int *lis)
{
	int	i;

	i = 0;
	// printf("lis input\n");
	// while (i < *len)
	// {
	// 	printf("[%d]: %d\n", i, lis[i]);
	// 	i++;
	// }
	while (i < *len)
	{
		printf("[%d]: %d\n", i, stack_a[i]);
		i++;
	}
	i = 0;
	printf("runtime output\n");
	while (i < *len)
	{
		printf("stack_a[%d]: %d\n", i, stack_a[i]);
		if (lis[i] == 0)
		{
			// write(1, "A\n", 2);
			// printf("%d\n", i);
			stack_b = push_b(stack_a, stack_b);
			stack_a[0] = '\0';
		}
		printf("index[4]: %d\n", stack_a[4]);
		printf("stack_a1[%d]: %d\n", i, stack_a[i]);
		stack_a = rotate_a(stack_a);
		i++;
	}
	i = 0;
	printf("stack a:\n");
	while (i < *len)
	{
		printf("[%d]: %d\n", i, stack_a[i]);
		i++;
	}
	i = 0;
	printf("stack b:\n");
	while (i < *len)
	{
		printf("[%d]: %d\n", i, stack_b[i]);
		i++;
	}
}