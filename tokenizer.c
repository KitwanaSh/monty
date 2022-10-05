#include "monty.h"

/**
  * tokenize - Tokenizes a string to return a group of words
  * @s: The string to be tokenized
  *
  * Return: An array of the words
  */

char **tokenize(char *s)
{
	char *token;
	int x = 0;
	static char *arr[10] = {NULL};

	token = strtok(s, " ");

	while (token != NULL)
	{
		arr[x++] = token;
		token = strtok(NULL, " ");
	}
	return (arr);
}
