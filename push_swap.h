/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:42:16 by tterribi          #+#    #+#             */
/*   Updated: 2022/02/28 18:29:37 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	char			stack;
	int				both;
	int				flag;
}	t_stack;

int				length(int *arr);

char			**ft_split(const char *s, char c);
size_t			get_words(const char *s, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);

int				ft_atoi(const char *str);
bool			is_in_strings(char c, char *str);

int				*converter(char **argv, int *stack_len);
#endif