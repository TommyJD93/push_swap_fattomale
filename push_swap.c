/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:48:02 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/16 18:39:10 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	i;
	int	len;

	if (argc < 2)
		return (0);
	len = length(*argv);
	stack_a = (int *)malloc(sizeof(int) * len);
	stack_b = (int *)malloc(sizeof(int) * len);
	while (*argv[i])
	{
		if (!stack_a[i] || !stack_b[i])
			return (0);
		write(1, "c\n", 2);
		stack_a[i] = *argv[i];
		i++;
	}
	i = 0;
	while (stack_a[i])
	{
		printf("stack_a value of index %d: %d", i, stack_a[i]);
		i++;
	}
}
