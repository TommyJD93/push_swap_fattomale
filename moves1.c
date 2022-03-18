/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:27:29 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/18 08:35:36 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*rotate_a(int *stack_a)
{
	int	*tmp;
	int	len;
	int	i;

	len = length(stack_a);
	tmp = (int *)malloc(sizeof(int *) * len);
	i = 0;
	while (i < len - 1)
	{
		tmp[i] = stack_a[i + 1];
		i++;
	}
	tmp[len - 1] = stack_a[0];
	tmp[len] = '\0';
	free(stack_a);
	return (tmp);
}

int	*rotate_b(int *stack_b)
{
	int	*tmp;
	int	len;
	int	i;

	len = length(stack_b);
	tmp = (int *)malloc(sizeof(int *) * len);
	i = 0;
	while (i < len - 1)
	{
		tmp[i] = stack_b[i + 1];
		i++;
	}
	tmp[len - 1] = stack_b[0];
	tmp[len] = '\0';
	free(stack_b);
	return (tmp);
}

int	*reverse_rotate_a(int *stack_a)
{
	int	*tmp;
	int	len;
	int	i;

	len = length(stack_a);
	tmp = (int *)malloc(sizeof(int *) * len);
	i = 0;
	while (i < len - 1)
	{
		tmp[i + 1] = stack_a[i];
		i++;
	}
	tmp[0] = stack_a[len - 1];
	tmp[len] = '\0';
	free(stack_a);
	return (tmp);
}

int	*reverse_rotate_b(int *stack_b)
{
	int	*tmp;
	int	len;
	int	i;

	len = length(stack_b);
	tmp = (int *)malloc(sizeof(int *) * len);
	i = 0;
	while (i < len - 1)
	{
		tmp[i + 1] = stack_b[i];
		i++;
	}
	tmp[0] = stack_b[len - 1];
	tmp[len] = '\0';
	free(stack_b);
	return (tmp);
}


// int main(void)
// {
// 	int *asd;
// 	int *asd1;
// 	int i = 0;

// 	asd = (int*)malloc(sizeof(int*) * 4);
// 	while (i < 9)
// 	{
// 		asd[i] = i+1;
// 		//printf("[%d]: %d\n", i, asd[i]);
// 		i++;
// 	}
// 	asd[i] = '\0';
// 	//write(1, "a\n", 2);
// 	asd1 = rotate_a(asd);
// 	//write(1, "c\n", 2);
// 	i = 0;
// //	write(1, "b\n", 2);
// 	while (asd1[i])
// 	{
// 		//write(1, "c\n", 2);
// 		printf("[%d]: %d\n", i, asd1[i]);
// 		i++;
// 	}
// }
