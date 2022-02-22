/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:16:13 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/22 09:03:25 by tterribi         ###   ########.fr       */
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*str;

	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	i = 0;
	ft_bzero(str, size * nmemb);
	return (str);
}
