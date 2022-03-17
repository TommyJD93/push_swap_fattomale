/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algortrithm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:39:16 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/17 15:07:42 by tterribi         ###   ########.fr       */
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

int	*lis(int *stack_a, int *len)
{
	int	i;
	int	j;
	int	h;
	int *lis;
	int hflag;

	lis = allocator(len);
	hflag = 1;
	i = 0;
	while (i < *len)
	{
		j = first_hflag(lis, len);
		if (j == -1)
			return (0);
		h = j;
		while (h < *len)
		{
			if (stack_a[j] < stack_a[h])
			{
				lis[h]++;
			}
			h++;
		}
		i++;
	}
	flag_manager(lis, len);
	return (lis);
}

int main(int argc, char **argv)
{
	int *stack_a;
	int len;
	int *output;
	int i = 0;
	
	stack_a = converter(argv, &len);
	printf("\033[0;32m");
	printf("converted array\n\n");
	printf("\033[0;36m");
	while (i < len)
	{
		printf("[%d]: %d\n", i, stack_a[i]);
		i++;
	}
	i = 0;
	output = lis(stack_a, &len);
	printf("\033[0;33m");
	printf("lis output\n\n");
	printf("\033[0;36m");
	while (i < len)
	{
		printf("[%d]: %d\n", i, output[i]);
		i++;
	}
	i = 0;
	while (i < len)
	{
		printf("%d ", stack_a[i]);
		i++;
	}
}
