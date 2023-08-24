#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * fnt_pop - to pop element from tack
 * @stack: input stack
 * @nbr_line: number of line
 *
 * Return: Nothing
 */
void fnt_pop(stack_t **stack, unsigned int nbr_line)
{
	stack_t *ptr = NULL;/*temporaire stack*/

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u, can't pop an empty stack\n", nbr_line);
		stus = EXIT_FAILURE;
		return;
	}
	ptr = (*stack)->next;
	free(*stack);
	*stack = ptr;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
