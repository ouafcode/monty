#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_qn - funtion to add node in last
 * @stack: input sstack
 * @n: number of node added
 *
 * Return: will retrun node
 */
stack_t *add_qn(stack_t **stack, const int n)
{
	stack_t *add = malloc(sizeof(stack_t));
	stack_t *init = *stack;

	if (!add)
	{
		free(add);
		return (NULL);
	}
	add->n = n;
	if (!*stack)
	{
		add->next = NULL;
		add->prev = NULL;
		*stack = add;
		return (add);
	}
	while (init)
	{
		if (!init->next)
		{
			add->next = NULL;
			add->prev = NULL;
			init->next = add;
			break;
		}
		init = init->next;
	}
	return (add);
}

/**
 * add_fr - to add node in front of stack
 * @stack: input stack
 * @n: nbr of th new node
 *
 * Return: new node
 */
stack_t *add_fr(stack_t **stack, const int n)
{
	stack_t *add = malloc(sizeof(stack_t));

	if (!add)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(add);
		return (NULL);
	}
	add->n = n;

	add->next = *stack;
	add->prev = NULL;
	if (*stack)
		(*stack)->prev = add;

	*stack = add;

	return (add);
}

/**
 * rt_stack - to return  element of stack
 * @stack: head stack
 *
 * Return: return number of element in stack
 */
size_t rt_stack(const stack_t *stack)
{
	size_t j = 0;

	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
		j++;
	}
	return (j);
}
/**
 * free_st - to free link between node
 * @stack: stack head
 *
 * Return: Nothing
 */
void free_st(stack_t *stack)
{
	stack_t *init = stack;
	stack_t *next;

	if (stack)
	{
		next = stack->next;
		while (init)
		{
			free(init);
			init = next;
			if (next)
				next = next->next;
		}
	}
}
