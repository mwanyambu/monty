#include "monty.h"

/**
 * get_op - gets opcode
 * @line: line
 * @opcode: stack opcode
 * @stack: pointer to head of stack
 * 2line_number: line number
 */

void get_op(char *line, char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t instructions[] = {
		{"push", push},
		{"pint", pint},
		{"pall", pall},
		{"add", add},
		{"swap", swap},
		{"nop", nop},
		{"pop", pop},
		{NULL, NULL}
	};
	int index;

	for (index = 0; instructions[index].opcode != NULL; index++)
	{
		if (_strcmp(opcode, instructions[index].opcode) == 0)
		{
			instructions[index].f(stack, line_number);
			return;
		}
	}
	fprintf (stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	free(line);
	_free(*stack);
	exit(EXIT_FAILURE);
}
