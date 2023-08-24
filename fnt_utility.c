#include "monty.h"
#include <ctype.h>
/**
 * id_integer - to identify integer
 * @str: string to identify
 *
 * Return: retrun 1 if success , or 0
 */
int id_integer(char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
/**
 * id_number - to identify number
 * @s: string to identify
 *
 * Return: 1 if success , or 0
 */
int id_number(char *s)
{
	int j;

	if (!s)
		return (0);

	for (j = 0; s[j]; j++)
		if (j < '0' || j > '9')
			return (0);

	return (1);
}

