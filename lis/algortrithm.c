/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algortrithm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:39:16 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/18 11:12:45 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	_lis(int *stack_a, int *len, int *lis)
{
	int	i;
	int	j;
	int	h;
	int hflag;

	hflag = 1;
	i = 0;
	while (i < *len)
	{
		j = first_hflag(lis, len);
		if (j == -1)
			return ;
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
}

void	lis_caller(int *stack_a, int *stack_b, int *len)
{
	int	*lis;
	int i = 0;

	lis = allocator(len);
	_lis(stack_a, len, lis);
	mv_to_b(stack_a, stack_b, len, lis);

}

int main(int argc, char **argv)
{
	int *stack_a;
	int *stack_b;
	int len;
	int *output;
	int i = 0;



	stack_a = converter(argv, &len);
	stack_b = (int *)malloc(sizeof(int) * len);
	if (!stack_b)
		return (0);
	// printf("\033[0;32m");
	// printf("converted array\n\n");
	// printf("\033[0;36m");
	// while (i < len)
	// {
	// 	printf("[%d]: %d\n", i, stack_a[i]);
	// 	i++;
	// }
	i = 0;
	lis_caller(stack_a, stack_b, &len);

}
