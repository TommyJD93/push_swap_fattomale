/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aoti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:54:58 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/02 16:26:42 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	in_strings(char c, char *str)
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

	while (in_strings(*(char *) str, "\t\n\v\f\r "))
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
