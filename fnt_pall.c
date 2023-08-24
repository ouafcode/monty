#include "monty.h"
/**
 * fnt_pall - to return stack
 * @stack: input stack
 * @nbr_line: number of line
 *
 * Return: void
 */
void fnt_pall(stack_t **stack, unsigned int nbr_line __attribute__((unused)))
{
	rt_stack(*stack);
}
