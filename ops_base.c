#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	push(t_stack **src, t_stack **dst)
{
    t_stack *node;

	if (!*src)
		return ;
	node = *src;
	*src = node->next;
	node->next = *dst;
	*dst = node;
}