/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:39:48 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/28 18:43:46 by tterribi         ###   ########.fr       */
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
	int	*cont;
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

int	string_manager(int *arr, int index, char *string)
{
	char	**matrix;
	int		j;

	matrix = ft_split(string, ' ');
	j = 0;
	while (matrix[j])
	{
		arr[index] = ft_atoi(matrix[j]);
		j++;
		index++;
	}
	return (index);
}

int	*converter(char **argv, int *stack_len)
{
	int	*arr;
	int	i;
	int mlen;

	write(1, "a\n", 2);

	stack_len = stack_len_calc(argv);

//	printf("%d", *stack_len);

	write(1, "b\n", 2);



	arr = (int *)malloc(sizeof(int *) * mlen);
	if (!arr)
		return (0);
	printf("check len 1: %d\n", length(arr));
	i = 0;
	while (i < mlen)
	{
		if (is_in_strings(' ', argv[i]))
		{
			write(1, "diocane\n", 9);
			i += string_manager(arr, i, argv[i]);
		}
		else
		{
			//write(1, "diocane1\n", 10);
			arr[i] = ft_atoi(argv[i+1]);
			printf("[%d]: %d\n", i, arr[i]);
			i++;
		}
	}
	arr[i] = '\0';
	printf("check len 2: %d\n", length(arr));
	i = 0;
	printf("-----------------\n");
	printf("test: %d\n", arr[0]);
	while (i < *stack_len)
	{
		//write(1, "a\n", 2);
		printf("[%d]: %d\n", i, arr[i]);
		i++;
	}
	//write(1, "b\n", 2);
	return (arr);
}

int	main(int argc, char **argv)
{
	int	*porcamadonna;
	int	i = 0;
	int *len;

	len = (int*)malloc(sizeof(int*) * 1);
	len[1] = '\0';
	write(1, "a\n", 2);
	//diocane = (int*)malloc(sizeof(int*));
	porcamadonna = converter(argv, len);
//	write(1, "a\n", 2);
	//printf("%d\n", diocane[0]);
	// while (porcamadonna[i])
	// {
	// 	printf("[%d]: %d\n", i, porcamadonna[i]);
	// 	i++;
	// }
	printf("main len: %d", *len);
	printf("f\n");
}
