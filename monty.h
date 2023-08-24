#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
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


#define INP { \
		{"push", fnt_push},\
		{"pall", fnt_pall},\
		{"pint", fnt_pint},\
		{"pop", fnt_pop},\
		{"swap", fnt_swap},\
		{"nop", fnt_nop},\
		{"add", fnt_add},\
		{"sub", fnt_sub},\
		{"div", fnt_div},\
		{"mul", fnt_mul},\
		{NULL, NULL} \
	}
/**
 * struct data - for current opcode
 * @data_mode: for defining stack and queue mode
 * @arg: input arg
 *
 * Description: to pass element around function
 */
typedef struct data
{
	int data_mode;
	char *arg;
} data;
data global;


extern int stus;

void fnt_push(stack_t **stack, unsigned int nbr_line);
void fnt_pall(stack_t **stack, unsigned int nbr_line);
void fnt_pint(stack_t **stack, unsigned int nbr_line);
void fnt_swap(stack_t **stack, unsigned int nbr_line);
void fnt_pop(stack_t **stack, unsigned int nbr_line);
void fnt_nop(stack_t **stack, unsigned int nbr_line);
void fnt_add(stack_t **stack, unsigned int nbr_line);
void fnt_sub(stack_t **stack, unsigned int nbr_line);
void fnt_div(stack_t **stack, unsigned int nbr_line);
void fnt_mul(stack_t **stack, unsigned int nbr_line);
void fnt_op(stack_t **stack, char *str, unsigned int nbr_line);

int id_integer(char *str);
int id_number(char *s);

stack_t *add_fr(stack_t **stack, const int n);
stack_t *add_qn(stack_t **stack, const int n);
void free_st(stack_t *satck);
size_t rt_stack(const stack_t *stack);

#endif
