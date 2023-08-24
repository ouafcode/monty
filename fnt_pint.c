#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * fnt_pint - to return top element
 * @stack: input stack
 * @nbr_line: number of line
 *
 * Return: Nothing
 */
void fnt_pint(stack_t **stack, unsigned int nbr_line)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", nbr_line);
		stus = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
}
