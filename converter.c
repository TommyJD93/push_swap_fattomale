/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:39:48 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/18 22:09:12 by tterribi         ###   ########.fr       */
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
	int	**matrix;
	int	j;

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
	int	j;

	if (!argv)
		return (NULL);
	i = 0;
	while (*argv[i])
	{
		if (is_in_strings(' ', *argv[i]))
			j = string_manager(arr, j, *argv[i]);
		else
		{
			arr[i] = ft_atoi(*argv[i]);
			if (num_validator(arr[i]))
			{
				printf("num of index %d isn't valid", i);
				return (0);
			}
		}
	}
}
