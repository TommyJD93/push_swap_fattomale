/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:39:48 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/24 18:38:02 by tterribi         ###   ########.fr       */
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
		cont = get_words(matrix[i], ' ');
	return (cont);
}

int	string_manager(int *arr, int index, char *string)
{
	int		**matrix;
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

int	*converter(char **argv)
{
	int	*arr;
	int	i;
	int	mlen;

	mlen = stack_len_calc(argv);
	arr = (int *)malloc(sizeof(int *) * mlen);
	if (!arr)
		return (0);
	while (i < mlen)
	{
		if (is_in_strings(' ', argv[i]))
			i += string_manager(arr, i, argv[i]);
		else
		{
			arr[i] = ft_atoi(argv[i]);
			i++;
		}
	}
	return (arr);
}

int	main(int argc, char **argv)
{
	int	*diocane;
	int i = 0;

	diocane = converter(argv);
	while (diocane[i])
	{
		printf("[%d]: %d", i, diocane[i]);
		i++;
	}
}
