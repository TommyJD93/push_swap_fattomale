/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:16:13 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/10 13:24:20 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	length(int *arr)
{
	int	cont;

	cont = 0;
	while (arr[cont])
		cont++;
	return (cont);
}

int	*allocator(int *len)
{
	int	i;
	int *arr;
	arr = (int *)malloc(sizeof(int) * (*len) + 1);
	if (!arr)
		return (0);
	i = 0;
	while (i < *len)
	{
		arr[i] = 0;
		i++;
	}
	arr[*len + 1] = '\0';
	return (arr);
}

int	flag_manager(int *lis, int *len)
{
	int	i;
	int	max;

	i = 1;
	max = -1;
	while (i < *len)
	{
		if (lis[i] > max)
		{
			lis[i] = 1;
			break ;
		}
		lis[i] = 0;
		i++;
	}
	i = 0;
	while (i < *len)
	{
		printf("lis[%d]: %d", i, lis[i]);
		i++;
	}
	return (i);
}

//looks for the higher flag in the *lis array
//(example: 0 1 0 1 2 0 0 1 3) and determinate
//the longest increasing sequence modifying the
//array to look like this (1 1 0 0 1 0 0 0 1)





















/* porco dio
vai tommy
siamo tutti con te
anche se
sappiamo
che lo hai piccolo
ti presto
la lente
d 'ingrandimento
così
lo vedi meglio
il
TUO mario <3
*/