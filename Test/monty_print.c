#include "monty.h"

/**
  * pint - to print an element at the top of the stack
  * @stack: address from where to print
  * @line_number: The line number of the opcode currently being executed
  *
  * Return: Nothing
  */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
