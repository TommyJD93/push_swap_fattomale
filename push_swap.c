/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:48:02 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/18 17:53:51 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	*converted;
	int	i;
	int	len;

	if (argc < 2)
		return (0);
	i = 0;
	converted = converter();
	int	suca[5] = {1, 2, 3, 4};
	len = length(suca);
	stack_a = (int *)malloc(sizeof(int) * len);
	stack_b = (int *)malloc(sizeof(int) * len);
	while (converted)
	{
		if (!stack_a[i] || !stack_b[i])
			return (0);
		stack_a[i] = suca[i];
		i++;
	}

}
