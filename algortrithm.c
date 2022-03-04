/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algortrithm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:39:16 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/04 18:34:22 by tterribi         ###   ########.fr       */
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
	while (i < (len - 1))
	{
		if (stack_a[i] > (stack_a[i]+1))
		{
			printf("suca");
			return (0);
		}
	}
	return (0);
}

void	LIS()
{
	int	*lis;
	int i;
}