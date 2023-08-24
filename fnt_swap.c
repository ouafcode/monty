#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * fnt_swap - function to swap top element
 * @stack: input stack
 * @nbr_line: number of line
 *
 * Return: void
 */
void fnt_swap(stack_t **stack, unsigned int nbr_line)
{
	stack_t *ptr = NULL;
	int nt = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", nbr_line);
		stus = EXIT_FAILURE;
		return;
	}
	ptr = *stack;
	nt = ptr->n;
	ptr->n = nt;

	ptr->n = ptr->next->n;
	ptr->next->n = nt;
}
