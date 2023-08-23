#include "monty.h"

/**
 * add - adds two stacks
 * @stack: pointer to head of stack
 * @line_number: line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (*stack ==  NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
