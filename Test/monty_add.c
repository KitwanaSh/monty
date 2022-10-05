#include "monty.h"

/**
  * add - Adds the top two elements in stack
  * @stack: adress of the stack
  * @line_number: The line number of the command being run
  *
  * Return: Nothing
  */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int sum = 0;

	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (tmp->n) + (tmp->next->n);
	pop(stack, line_number);
	(*stack)->n = sum;
}
