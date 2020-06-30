#include "monty.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg list
 * Return: 0 success
 */

int main(int ac, char **av)
{
	instruction_t op[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"swap", swap},
		{"sub", sub},
		{"_div", _div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{NULL, NULL}
	};

	FILE *fd_open;
	ssize_t read = NULL;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_counter = 0;
	char *token;
	int number;
	char *push_token;
	stack_t *stack = NULL;
	int i;
	int a;
	char *endptr;

	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	fd_open = fopen(av[1], "r");
	if (fd_open == NULL)
	{
		printf("Error: Can't open file %s\n", av[1]);
		return (EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, fd_open)) != -1)
	{
		line_counter += 1;
		token = strtok(line, " \n\t");
		number = 0;
		while (token != NULL)
		{
			push_token = "push";
			a = _strcmp(token, push_token);
			if (a == 0)
			{
				token = strtok(NULL, " \n");
				if (token == NULL)
				{
					printf("L%d: usage: push integer\n", line_counter);
					return (EXIT_FAILURE);
				}
				strtol(token, &endptr, 10);
				if (*endptr == '\0')
				{
					number = atoi(token);
					add_node(&stack, number);
					break;
				}
				else
				{
					printf("L%d: usage: push integer\n", line_counter);
					return (EXIT_FAILURE);
				}

			}
			else
			{
				i = 0;
				while (op[i].opcode != NULL)
				{
					a = strcmp(token, op[i].opcode);
					if (a == 0)
					{
						op[i].f(&stack, line_counter);
						break;
					}
					else if (a != 0)
					{
						i++;
					}
					if (!op[i].opcode)
					{
						printf("L%d: unknown instruction %s\n", line_counter, token);
						return (EXIT_FAILURE);
					}
				}
				break;
			}
		}

	}
	free(line);
	return (0);
}
