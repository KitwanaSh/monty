#include "monty.h"

/**
  * swap - Swaps the top two elements of a stack
  * @stack: swaped Address of stack
  * @line_number: Line number of opcode being executed
  *
  * Return: Nothing
  */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int data;

	/* Make sure node conatins more than 1 element */
	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/* Swap the data in the nodes */
	data = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = data;
}
