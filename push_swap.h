/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bensalahmouhemed <bensalahmouhemed@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:43:12 by bensalahmou       #+#    #+#             */
/*   Updated: 2026/11/27 01:15:47 by bensalahmou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>

typedef struct s_stack
{
	int	value;
	struct s_stack *next;
} t_stack;

t_stack	*stack_new(int value);
void	free_stack(t_stack *stack);
void	swap(t_stack **stack);
void	push(t_stack **src, t_stack **dst);
void	rotate(t_stack **stack);

#endif