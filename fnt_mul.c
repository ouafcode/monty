#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * fnt_mul - function to multiply the second top element
 * @stack: input stack
 * @nbr_line: number of line
 *
 * Return: Nothing
 */
void fnt_mul(stack_t **stack, unsigned int nbr_line)
{
	int var_res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", nbr_line);
		stus = EXIT_FAILURE;
		return;
	}

	var_res = ((*stack)->next->n) * ((*stack)->n);
	fnt_pop(stack, nbr_line);
	(*stack)->n = var_res;
}
