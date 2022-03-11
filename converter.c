/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:39:48 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/09 14:36:57 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	num_validator(long int num)
{
	if (num < INT_MIN || num > INT_MAX)
		return (false);
	return (true);
}

int	stack_len_calc(char **matrix)
{
	int	cont;
	int	i;

	i = 0;
	cont = 0;
	while (matrix[i])
	{
		cont += get_words(matrix[i], ' ');
		i++;
	}
	return (cont - 1);
}

void	string_manager(int *arr, char *string)
{
	char	**matrix;
	int		i;
	int		index;
	int		j;

	matrix = ft_split(string, ' ');
	j = 0;
	index = 0;
	while (matrix[j])
	{
		i = 0;
		while (matrix[j][i])
		{
			arr[index] = ft_atoi(matrix[j]);
			i++;
		}
		index++;
		j++;
	}
}

int	*converter(char **argv, int *stack_len)
{
	int	*arr;
	int	i;
	int	mlen;

	*stack_len = stack_len_calc(argv);
	arr = (int *)malloc(sizeof(int *) * *stack_len);
	if (!arr)
		return (0);
	i = 0;
	if (in_strings(' ', argv[1]))
	{
		string_manager(arr, argv[1]);
	}
	else
	{
		while (i < *stack_len)
		{
			arr[i] = ft_atoi(argv[i+1]);
			i++;
		}
	}
	arr[*stack_len+1] = '\0';
	return (arr);
}

// int main(int argc, char **argv)
// {
// 	char	**mtx;
// 	int i = 0;
// 	int j;

// 	mtx = ft_split(argv[1], ' ');

// 	while (mtx[i])
// 	{
// 		j = 0;
// 		while (mtx[i][j])
// 		{
// 			printf("j value[%d]: %c", j, mtx[i][j]);
// 			j++;
// 		}
// 		i++;
// 		printf("\n");
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	int	*porcamadonna;
// 	int	i = 0;
// 	int *len;

// 	printf("input check: %s\n", argv[1]);

// 	len = (int*)malloc(sizeof(int*) * 1);
// 	len[1] = '\0';
// 	//write(1, "a\n", 2);
// 	porcamadonna = converter(argv, len);
// //	write(1, "a\n", 2);
// 	//printf("%d\n", diocane[0]);
// 	printf("----------------\n");
// 	printf("final output:\n");
// 	while (i < *len)
// 	{
// 		printf("[%d]: %d\n", i, porcamadonna[i]);
// 		i++;
// 	}
// 	// printf("main len: %d\n", *len);
// 	// printf("f\n");
// }
