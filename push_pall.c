#include "monty.h"

/**
 * push - adds element to stack
 * @stack: pointer to head of stack
 * @line_number: value
 */

void push(stack_t **stack, unsigned in line_number)
{
	stack_t *nw;

	nw = create_node(line_number);

	if (nw == NULL)
	{
		fprintf(stderr, "Usage: push integer\n");
		exit(EXIT_FAILURE);
	}
	if (nw != NULL)
	{
		nw->next = *stack;

		if (*stack != NULL)
		{
			(*stack)->prev = nw;
		}
		*stack = nw;
	}
}

/**
 * pall - displays contents of stack
 * @stack: pointer to head of stack
 * @line_number: number
 */
void pall(stack_t **stack, __attribute__((unused)) unsigned int number)
{
	stack_t *tmp = *stack;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}
