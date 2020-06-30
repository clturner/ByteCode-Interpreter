#include "monty.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @stack: pointer to pointer to begining of linked list
 * @n: int to copy into new node
 */

stack_t  *add_node(stack_t **stack, int n)
{

	stack_t *new_node = malloc(sizeof(stack_t *));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (stack == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;
	*stack = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;
	return (new_node);
}

/**
 * pall - print all the elements in linked list on stack
 * @stack: pointer to head of linked list of values i stack
`* @line_number: line number
 * Return: pall
*/
void pall(stack_t **stack, unsigned int line_number)
{
	unsigned int i;
	stack_t *temp;

	i = line_number;
	temp = *stack;
	while (temp != NULL)
	{
		i++;
		printf("%d\n", (temp)->n);
		temp  = (temp)->next;

	}
}

/**
 * pint - Prints the value at the top of the stack
 * @stack: pointer to head of the stack list
 * @line_number: line number
 * Return: none
 */
void  pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		printf("%d\n", (*stack)->n);
	}
	if (*stack == NULL || stack == NULL)
	{
		printf("L%d: : can't pint, stack empty,\n", line_number);
	}
}

/**
* pop - remove 1st node of linked list
* @stack: head of list
* @line_number: line number
* Return: none
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node;

	if (*stack != NULL)
	{
		temp_node = *stack;
		*stack = temp_node->next;
		free(temp_node);
	}
	else
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}

/**
 * add - returns the sum of all the data (n) of a linked list
 * @stack: pointer to head of a linked list
 * @line_number: line number
 * Return: return the sum of all (n) value of nodes
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node;
	int sum = 0;

	temp_node = *stack;

	if (temp_node == NULL)
	{
		printf("L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (temp_node->n + temp_node->next->n);
	temp_node->next->n = sum;
	temp_node->next->prev = NULL;
	*stack = temp_node->next;
	free(temp_node);
}
