#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * fnt_add - function to add two first node
 * @stack: input stack
 * @nbr_line: input number line
 *
 * Return: Nothing
 */
void fnt_add(stack_t **stack, unsigned int nbr_line)
{
	int var_res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", nbr_line);
		stus = EXIT_FAILURE;
		return;
	}
	var_res = ((*stack)->next->n) + ((*stack)->n);
	fnt_pop(stack, nbr_line);
	(*stack)->n = var_res;
}
