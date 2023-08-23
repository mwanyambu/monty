#include "monty.h"

/**
 * swap - swaps two elements of a stack
 * @stack: pointer to head of stack
 * @line_number: line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *s;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "l%d: can't swap, stack too short\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	s = (*stack)->next;
	(*stack)->next = s->next;
	(*stack)->prev = s;
	if (s->next != NULL)
	{
		s->next->prev = *stack;
	}
	s->prev = NULL;
	s->next = *stack;
	*stack = s;
}
