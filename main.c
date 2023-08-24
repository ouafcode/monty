#define  _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * fnt_err - function to print error
 *
 * Return: Nothing
 */
void fnt_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * fl_err - function for file error
 * @argv: input file
 *
 * Return: Nothing
 */
void fl_err(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}
/*declaring status file*/
int stus = 0;

/**
 * main - main function
 * @argv: input arg per user
 * @argc: number of arg added
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	FILE *var_fl;
	char *var_buf = NULL;
	char *str = NULL;
	size_t var_len = 0;/*buffer length*/
	stack_t *stack = NULL;
	/*number of line*/
	unsigned int nbr_line = 1;

	global.data_mode = 1;
	if (argc != 2)
		fnt_err();

	var_fl = fopen(argv[1], "r");
	if (!var_fl)
		fl_err(argv[1]);
	while (getline(&var_buf, &var_len, var_fl) != -1)
	{
		if (stus)
			break;
		if (*var_buf == '\n')
		{
			nbr_line++;
			continue;
		}
		str = strtok(var_buf, " \t\n");
		if (!str || *str == '#')
		{
			nbr_line++;
			continue;
		}
		global.arg = strtok(NULL, " \t\n");
		fnt_op(&stack, str, nbr_line);
		nbr_line++;
	}
	free(var_buf);
	free_st(stack);/*to free stack*/
	fclose(var_fl);
	exit(stus);
}
