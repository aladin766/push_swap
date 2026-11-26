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

	a = stack_new(1);
	a->next = stack_new(2);
	a->next->next = stack_new(3);
	print_stack(a);
	swap(&a);
	print_stack(a);
	free_stack(a);
	return (0);
}
