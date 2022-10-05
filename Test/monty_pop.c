#include "monty.h"

/**
  * pop - Removes the element at the top of the stack
  * @stack: address of the stack where to remoove
  * @line_number: The line number of the opcode currently being executed
  *
  * Return: Nothing
  */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	if (*stack == NULL)
	{
		free_stack(*stack);
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}

	if (tmp->next == NULL)
	{
		free(tmp);
		*stack = NULL;
	}
	else
	{
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
		free(tmp);
	}
}
