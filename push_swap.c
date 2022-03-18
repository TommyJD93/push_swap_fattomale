/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:48:02 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/18 08:32:05 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void porcodio(int *a)
{
	(*a) = 10;
}

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	i;
	int	len;

	if (input_checker(argc, argv))
		return (0);
	i = 0;
	stack_a = converter(argv, &len);
	stack_b = (int *)malloc(sizeof(int) * len);
	if (!stack_b)
		return (0);
	write(1, "a\n", 2);
	lis_algo(stack_a, &len, stack_a[0]);
	write(1, "b\n", 2);

	// while (i < len)
	// {
	// 	printf("[%d]: %d\n", i, stack_a[i]);
	// 	i++;
	// }
	free(stack_a);
	free(stack_b);
}
