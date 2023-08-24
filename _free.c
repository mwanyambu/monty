#include "monty.h"

/**
 * _free - frees stack
 * @stack: pointer to head of stack
 */

void _free(stack_t *stack)
{
	stack_t *fr;

	while (stack != NULL)
	{
		fr = stack;
		stack = stack->next;
		free(fr);
	}
}
