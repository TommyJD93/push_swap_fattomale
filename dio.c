// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   algortrithm.c                                      :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/03/04 12:39:16 by tterribi          #+#    #+#             */
// /*   Updated: 2022/03/11 18:58:03 by tterribi         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "push_swap.h"

// void	sort_three()
// {

// }

// void	sort_five(int *stack_a, int *stack_b, int *len)
// {
// 	int	i;

// 	i = 0;
// 	while (i < (*len - 1))
// 	{
// 		if (stack_a[i] > (stack_a[i]+1))
// 		{
// 			printf("suca");
// 			return ;
// 		}
// 	}
// 	return ;
// }

// void	lis_algo(int *stack_a, int *len, int min)
// {
// 	int	*lis;
// 	int	i;

// 	lis = allocator(len);
// 	lis[i] = 1;
// 	i = 0;
// 	printf("\033[0;31m");
// 	printf("min value: %d\n", min);
// 	printf("\033[0;33m");
// 	printf("input check\n\n");
// 	printf("\033[0;36m");
// 	while (i < *len)
// 	{
// 		printf("[%d]: %d\n", i, stack_a[i]);
// 		i++;
// 	}
// 	i = 1;
// 	while (i < *len)
// 	{
// 		if (stack_a[i] > min)
// 		{
// 			min = stack_a[i];
// 			lis[i] += 1;
// 		}
// 		i++;
// 	}
// 	i = 0;
// 	printf("\033[0;34m");
// 	printf("first flagging\n\n");
// 	printf("\033[0;36m");
// 	while (i < *len)
// 	{
// 		printf("[%d]: %d\n", i, lis[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\n");
// 	while (i < *len)
// 	{
// 		printf("%d", stack_a[i]);
// 		i++;
// 	}
	
// }

// int main(int argc, char **argv)
// {
// 	int *stack_a;
// 	int len;
// 	int i = 0;
	
// 	stack_a = converter(argv, &len);
// 	printf("\033[0;32m");
// 	printf("converted array\n\n");
// 	printf("\033[0;36m");
// 	while (i < len)
// 	{
// 		printf("[%d]: %d\n", i, stack_a[i]);
// 		i++;
// 	}
// 	i = 0;
// 	lis_algo(stack_a, &len, stack_a[0]);
// }
