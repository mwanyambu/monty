#include "main.h"

/**
 * pop - removes top element from struct
 * @stack: pointer to head of stack
 * @line_number: integer value
 */

void pop(stack_t **stack, unsigned int line_number)
{
	int ele;
	stack_t *tmp;

	ele = (*stack)->n;
	tmp = *stack;
	if (*stack ==  NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	ele = (*stack)->n;
	tmp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
