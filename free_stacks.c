#include "monty.h"

/**
  * free_stack - to frees the stack at the end of all executions
  * @stack: Pointer to the stack to be freed
  *
  * Return: Nothing at all
  */

void free_stack(stack_t *stack)
{
	stack_t *tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

