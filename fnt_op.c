#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * fnt_op - to execut funtion
 * @stack: input stack
 * @str:  to compare
 * @nbr_line: number of line
 *
 * Return: void
 */
void fnt_op(stack_t **stack, char *str, unsigned int nbr_line)
{
	int x = 0;

	instruction_t op[] = INP;

	if (!strcmp(str, "stack"))
	{
		global.data_mode = 1;
		return;
	}
	if (!strcmp(str, "queue"))
	{
		global.data_mode = 0;
		return;
	}
	while (op[x].opcode)
	{
		if (strcmp(op[x].opcode, str) == 0)
		{
			op[x].f(stack, nbr_line);
			return;
		}
		x++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", nbr_line, str);
	stus = EXIT_FAILURE;
}
