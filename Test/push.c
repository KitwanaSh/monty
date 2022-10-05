#include "monty.h"

/**
  * push - Adds an element to the top of a stack
  * @stack: the adress of the stack where the element is to be added
  * @line_number: The line number of the opcode currently being executed
  *
  * Return: Nothing
  */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	int x = 0;

	for (x = 0; push_data[x] != '\0'; x++)
	{
		if (isdigit(push_data[x]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n",
					line_number);
			exit(EXIT_FAILURE);
		}
	}



	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(push_data);
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*stack == NULL)
	{
		*stack = new_node;
	}

	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}
