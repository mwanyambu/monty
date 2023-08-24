#include "monty.h"

/**
 * _isdigit - checks wheater a charcter is a digit
 * @c: the checker
 * Return: 1-if digit, 0-if not a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
