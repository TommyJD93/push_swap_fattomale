/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:35:01 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/04 18:36:19 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	int	i;
	int len = stack_len_calc(argv);

	i = 0;

	while (i < (len - 1))
	{
		if (stack_a[i] > (stack_a[i]+1))
		{
			printf("suca");
			return (0);
		}
	}
}