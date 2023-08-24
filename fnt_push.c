#include "monty.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * fnt_push - funtion to push element
 * @stack: input stack
 * @nbr_line: number of line
 *
 * Return: void
 */
void fnt_push(stack_t **stack, unsigned int nbr_line)
{
	char *p = global.arg;

	if ((id_integer(p)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", nbr_line);
		stus = EXIT_FAILURE;
		return;
	}
	if (global.data_mode == 1)
	{
		if (!add_fr(stack, atoi(global.arg)))/*used to add node*/
		{
			return;
			stus = EXIT_FAILURE;
		}
	}
	else
	{
		if (!add_qn(stack, atoi(global.arg)))
		{
			return;
			stus = EXIT_FAILURE;
		}
	}
}
