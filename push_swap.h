/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:42:16 by tterribi          #+#    #+#             */
/*   Updated: 2022/03/04 18:36:01 by tterribi         ###   ########.fr       */
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
int	stack_len_calc(char **matrix);

char			**ft_split(const char *s, char c);
size_t			get_words(const char *s, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);

int				ft_atoi(const char *str);
bool			in_strings(char c, char *str);

bool			input_checker(int argc, char **argv);

int				*converter(char **argv, int *stack_len);

//moves
void			swap_a(int *stack_a);
void			swap_b(int *stack_b);
int				*push_a(int *stack_a, int *stack_b);
int				*push_b(int *stack_a, int *stack_b);
int				*rotate_a(int *stack_a);
int				*rotate_b(int *stack_b);
int				*reverse_rotate_a(int *stack_a);
int				*reverse_rotate_b(int *stack_b);
bool			call_checker(int *arr);
#endif