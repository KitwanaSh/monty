#include "monty.h"

/**
  * pall - To print values of the stack
  * @stack: adress of the stack to print
  * @line_number: The line number of the opcode being executed
  *
  * Return: Nothing
  */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int cnt = 0;
	(void) line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		cnt++;
		tmp = tmp->next;
	}
}
