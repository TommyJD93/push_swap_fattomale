/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algortrithm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:39:16 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/10 13:41:09 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three()
{

}

void	sort_five(int *stack_a, int *stack_b, int *len)
{
	int	i;

	i = 0;
	while (i < (*len - 1))
	{
		if (stack_a[i] > (stack_a[i]+1))
		{
			printf("suca");
			return ;
		}
	}
	return ;
}

void	lis_algo(int *stack_a, int *len, int min)
{
	int	*lis;
	int	i;

	lis = allocator(len);
	i = 0;
	while (i < *len)
	{
		if (stack_a[i] < min)
			lis[i] += 1;
		i++;
	}
	i = 0;
	while (i < *len)
	{
		printf("[%d]: %d\n", i, lis[i]);
		i++;
	}
}
