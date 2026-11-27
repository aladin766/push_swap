/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bensalahmouhemed <bensalahmouhemed@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 01:43:12 by bensalahmou       #+#    #+#             */
/*   Updated: 2026/11/27 01:47:06 by bensalahmou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int	value;
	struct s_stack *next;
} t_stack;

typedef enum e_op
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
	OP_COUNT
}	t_op;

typedef struct s_ctx
{
	t_stack	*a;
	t_stack	*b;
	int		count[OP_COUNT];
}	t_ctx;

t_stack	*stack_new(int value);
void	free_stack(t_stack *stack);
void	swap(t_stack **stack);
void	push(t_stack **src, t_stack **dst);
void	rotate(t_stack **stack);
void	reverse_rotate(t_stack **stack);

#endif