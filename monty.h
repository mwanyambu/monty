#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define MAX_LEN 1024
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

stack_t *create_node(int n);
void pall(stack_t **stack, __attribute__((unused)) unsigned int number);
void push(stack_t **stack, unsigned int line_number, char *value);
void pusher(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(__attribute__ ((unused)) stack_t **stack, __attribute__ ((unused)) unsigned int line_number);
int main(int argc, char **argv);
int _isdigit(int c);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void _free(stack_t *stack);
void process(char *line, stack_t **stack, unsigned int line_number);
void get_op(char *line, char *opcode, stack_t **stack, unsigned int line_number);
int _atoi(char *s);
#endif
