#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * fnt_sub - function to substract top element
 * @stack: input stack
 * @nbr_line: number of line
 *
 * Return: Nothing
 */
void fnt_sub(stack_t **stack, unsigned int nbr_line)
{
	int var_res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", nbr_line);
		stus = EXIT_FAILURE;
		return;
	}
	var_res = ((*stack)->next->n) - ((*stack)->n);
	fnt_pop(stack, nbr_line);
	(*stack)->n = var_res;
}

