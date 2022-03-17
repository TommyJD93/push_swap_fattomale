/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:05:44 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/17 15:05:58 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	hflag(int *lis, int*len)
{
	int	max;
	int	i;

	max = 1;
	i = 0;
	while (i < *len)
	{
		if (lis[i] > max)
			max = lis[i];
		i++;
	}
	return (max);
}

int	first_hflag(int *lis, int *len)
{
	int	i;
	int	start;
	int	max;
	
	i = 0;
	max = hflag(lis, len);
	while (i < *len)
	{
		if (lis[i] == max)
			return (i);
		i++;
	}
	return (-1);
}