#include <stdio.h>
#include "push_swap.h"

void	print_stack(t_stack *s)
{
	while (s)
	{
		printf("%d ", s->value);
		s = s->next;
	}
	printf("\n");
}

int	main(void)
{
	t_stack	*a;
	t_stack	*b;

	a = stack_new(1);
	a->next = stack_new(2);
	a->next->next = stack_new(3);
	b = stack_new(9);
	push(&a, &b);
	print_stack(a);
	print_stack(b);
	free_stack(a);
	free_stack(b);
	return (0);
}