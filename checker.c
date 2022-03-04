/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 09:05:42 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/02 16:25:46 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	input_checker(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		return (true);
	i = 0;
	if (argc > 2)
	{
		while (argv[i])
		{
			if ((!in_strings(' ', argv[1]) && in_strings(' ', argv[i]))
				|| (in_strings(' ', argv[1]) && !in_strings(' ', argv[i])))
				return (true);
			i++;
		}
	}
	return (false);
}
