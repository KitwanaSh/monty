#include "monty.h"

/**
  * main - The monty fuction test
  * @argc: Argument count
  * @argv: Arguments pointer to array
  * Return: 0 when all passes
  */
int main(int argc, char *argv[])
{
	FILE *fp;
	char *line = NULL, **arr;
	size_t len = 0;
	stack_t *stack = NULL;
	unsigned int line_number;
	void (*f)(stack_t **stack, unsigned int line_number);
	int length = 0;

	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n"), exit(EXIT_FAILURE);

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]), exit(EXIT_FAILURE);

	line_number = 1;
	while ((length = getline(&line, &len, fp)) != -1)
	{
		if (line[length - 1] == '\n')
			line[length - 1] = '\0';

		arr = tokenize(line);

		f = get_op_func(arr[0]);
		if (f == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n",
					line_number, arr[0]);
			exit(EXIT_FAILURE);
		}

		if (arr[1])
			push_data = arr[1];

		f(&stack, line_number);
		line_number++;
	}
	free(line), free_stack(stack), fclose(fp);
	return (0);
}
