/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_mv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:18:15 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/17 17:40:24 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mv_to_b(int *stack_a, int *stack_b, int *len, int *lis)
{
	int	i;

	i = 0;
	while (i < *len)
	{
		if (lis[i] == 0)
		{
			push_b(stack_a, stack_b);
			rotate_a(stack_a);
		}
		i++;
	}
	i = 0;
	printf("stack a:\n");
	while (i < *len)
	{
		printf("[%d]: %d", i, stack_a[i]);
	}
	i = 0;
	printf("stack b:\n");
	while (i < *len)
	{
		printf("[%d]: %d", i, stack_b[i]);
	}	
}