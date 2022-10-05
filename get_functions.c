#include "monty.h"

/**
  * get_op_func - Get the opcode's corresponding function
  * @s: Where the opcode gets funtion
  *
  * Return: A NULL
  */

void (*get_op_func(char *s))(stack_t **head, unsigned int line_number)
{
	int x = 0;
	instruction_t opcodes[] = {
				{"push", push},
				{"pall", pall},
				{"pint", pint},
				{"pop", pop},
				{"add", add},
				{"swap", swap},
				{"nop", nop},
				{"sub", sub}
	};

	while (x < 8)
	{
		if (strcmp(opcodes[x].opcode, s) == 0)
		{
			return (opcodes[x].f);
		}
		x++;
	}
	return (NULL);
}
