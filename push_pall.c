#include "monty.h"

/**
 * pusher - push helper
 * @stack: pointer to head of stack
 * @line_number: line number
 */
void pusher(stack_t **stack, unsigned int line_number)
{
	char *value;

	value = strtok(NULL, " \t\n\r");
	if (value == NULL)
	{
		fprintf(stderr, "L%d: Usage: push integer\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	push(stack, line_number, value);
}

/**
 * push - adds element to stack
 * @stack: pointer to head of stack
 * @line_number: value
 */
void push(stack_t **stack, unsigned int line_number, char *value)
{
	stack_t *nw = NULL;
	int val;

	nw = malloc(sizeof(stack_t));

	if (value == NULL)
	{
		fprintf(stderr, "L%d: Usage: push integer\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	val = _atoi(value);
	nw->n = val;
	nw->prev = NULL;
	nw->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = nw;
	*stack = nw;
}

/**
 * pall - displays contents of stack
 * @stack: pointer to head of stack
 * @line_number: number
 */
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp = NULL;

	tmp = *stack;

	while (tmp != NULL)
	{
		fprintf(stdout, "%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}
