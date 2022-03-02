/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 09:05:42 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/02 09:13:56 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	input_checker(int argc, char **argv)
{
	if (argc <= 1)
		return (true);
	if (argc > 2)
		if (is_in_strings(' ', argv[1]) && is_in_strings(' ', argv[2]))
			return (true);
	return (false);
}
