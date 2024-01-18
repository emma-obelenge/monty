#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

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

stack_t *head = NULL;

void pop(char *opcode, void (*f)(stack_t **stack, unsigned int line_number));
void pint(char *opcode, void (*f)(stack_t **stack, unsigned int line_number));
void push(char *opcode, void (*f)(stack_t **stack, unsigned int line_number));
void pall(char *opcode, void (*f)(stack_t **stack, unsigned int line_number));
void swap(char *opcode, void (*f)(stack_t **stack, unsigned int line_number));
void add(char *opcode, void (*f)(stack_t **stack, unsigned int line_number));

int is_int(const char *str);
void read_exec(const char *filepath);
int opcode_check(char *opcode, unsigned int line_num);
void opcode_exec(unsigned int status, unsigned int count);
void push(stack_t **stack, unsigned int line_number);
stack_t *new_stack(int argument)

#endif