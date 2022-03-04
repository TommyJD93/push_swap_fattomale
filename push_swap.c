/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:48:02 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/02 17:13:04 by tterribi         ###   ########.fr       */
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
	int	*converted;
	int	i;
	int	len;

	if (input_checker(argc, argv))
		return (0);
	i = 0;
	stack_a = converter(argv, &len);
	write(1, "b\n", 2);
	stack_b = (int *)malloc(sizeof(int) * len);
	write(1, "c\n", 2);
	while (i < len)
	{
		write(1, "d\n", 2);
		printf("[%d]: %d\n", i, stack_a[i]);
		i++;
	}
	write(1, "e\n", 2);
	free(stack_a);
	free(stack_b);
}
