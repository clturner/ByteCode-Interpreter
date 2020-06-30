#include "monty.h"

/**
 * _isdigit - entry point
 * @c: varibale string to check chars are between 0-9
 * Description - checks if string is number
 *
 * Return: o if number
 */
int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((unsigned char)c[i] >= 48 && (unsigned char)c[i] <= 57)
		{
			;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _strcmp - compares the two strings eturns an integer less, equa\
 l, or greater
 * @s1: first string to compare
 * @s2: second string to compare
 * Description: compares the two strings returnes diff in ascii
 * Return: k
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		k = s1[i] - s2[i];
		return (k);
	}
	return (0);
}

/**
 * swap - swap the value in 1st node with value in second
 * @stack: stack to swap values
 * @line_number: line number of command
 * Return: none
 */
void swap(stack_t **stack, unsigned int line_number)
{

	stack_t *temp_node_1;
	stack_t *temp_node_2;
	int c;

	temp_node_1 = *stack;
	temp_node_2 = *stack;

	temp_node_2 = temp_node_1->next;

	if (temp_node_1 == NULL || temp_node_2 == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	c = temp_node_1->n;
	temp_node_1->n = temp_node_2->n;
	temp_node_2->n = c;
}

/**
 * sub - subtract the value in 2nd node with value in 1st
 * @stack: linked list
 * @line_number: line number
 * Return: none
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node;
	int difference = 0;

	temp_node = *stack;
	if (temp_node == NULL)
        {
                printf("L%d: can't sub, stack too short", line_number);
                exit(EXIT_FAILURE);
        }
	difference = (temp_node->next->n - temp_node->n);
	temp_node->next->n = difference;
	temp_node->next->prev = NULL;
	*stack = temp_node->next;
	free(temp_node);
}
/**
 * _div - devide the value in 2nd node with value in 1st
 * @stack: linked list
 * @line_number: line number
 * Return: none
 */
void _div(stack_t **stack, unsigned int line_number)
{
        stack_t *temp_node;
        int deviser = 0;

        temp_node = *stack;
	if (temp_node->n == 0)
	{
		printf("L%d: division by zero", line_number);
		exit(EXIT_FAILURE);
	}
        if (temp_node == NULL)
        {
                printf("L%d: can't div, stack too short", line_number);
                exit(EXIT_FAILURE);
        }
        deviser = (temp_node->next->n / temp_node->n);
        temp_node->next->n = deviser;
        temp_node->next->prev = NULL;
        *stack = temp_node->next;
        free(temp_node);
}
