#include "monty.h"

/**
 * process - proceses code
 * @line: line to be processed
 * @stack: pointer to head of stack
 * @line_number: line number
 */
void process(char *line, stack_t **stack, unsigned int line_number)
{
	int num;
	char *op, *val;
	char delimiter = " \n\t\r";

	if (_strcmp(line, "") == 0)
	{
		return;
	}
	op = strtok(line, delimiter);

	if (op == NULL)
	{
		return;
	}
	val = strtok(NULL, delimiter);

	num = _isdigit(val);

	if ((val == NULL || num == 0) && _strcmp(op, "push") == 0)
	{
		fprintf(stderr, "L%d: Usage: push integer\n", line_number);
		free(line);
		_free(stack);
		exit(EXIT_FAILURE);
	}
	get_op(line, op, stack, line_number);
}
