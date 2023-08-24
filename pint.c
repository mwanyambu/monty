#include "monty.h"

/**
 * pint - displays an element on top of the stack
 * @stack: pointer to head of stack
 * @line_number: integer value
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf (stderr, "L%d: Can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf ("value at the top of stack is: %d\n", (*stack)->n);
}
