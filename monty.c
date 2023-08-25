#include "monty.h"

/**
 * main - entry point
 * @argv: argument vector
 * @argc: argument count
 * Return: exit_success else exit_failure
 */

int main(int argc, char **argv)
{
	FILE *f;
	char ln[MAX_LEN];
	stack_t *stack = NULL;
	char *filename;
	unsigned int line_number = 0;
	size_t len = 0;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s monty\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	f = fopen(filename, "r");

	if (f == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}
	while (fgets(ln, sizeof(ln), f) != NULL)
	{
		line_number++;
		len = _strlen(ln);

		if (len > 0 && ln[len - 1] == '\n')
		{
			ln[len - 1] = '\0';
		}
		process(ln, &stack, line_number);
	}
	fclose(f);
	_free(stack);

	return (EXIT_SUCCESS);
}
