#include "monty.h"

/**
 * create_node - ctreates a new node
 * @n: integer
 * Return: nw
 */

stack_t *create_node(int n)
{
	stack_t *nw =  NULL;

	nw = malloc(sizeof(stack_t));

	if (nw == NULL)
	{
		fprintf(stderr, "Error: memory allocation failure\n");
		exit(EXIT_FAILURE);
	}
	nw->n = n;
	nw->next = NULL;
	nw->prev = NULL;

	return (nw);
}

