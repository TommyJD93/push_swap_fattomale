/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:39:48 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/18 20:45:52 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	num_validator(int num)
{
	if (num < INT_MIN || num > INT_MAX)
		return (false);
	return (true);
}

bool	is_in_strings(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	while (is_in_strings(*(char *) str, "\t\n\v\f\r "))
		str++;
	sign = 1;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (result * 10 < 0)
			return (-1);
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}

int	string_manager(int *arr, int index, char *string)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = ft_split(string, ' ');
	i = 0;
	j = 0;
	while (matrix[i])
	{
		arr[i] = ft_atoi(matrix[i]);
		i++;
	}
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
