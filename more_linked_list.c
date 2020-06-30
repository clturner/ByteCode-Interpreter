#include "monty.h"

/**
 * mul - multiply the value in 2nd node with value in 1st
 * @stack: linked list
 * @line_number: line number
 * Return: none
 */
void mul(stack_t **stack, unsigned int line_number)
{
        stack_t *temp_node;
        int product = 0;

        temp_node = *stack;
        if (temp_node == NULL || temp_node->next == NULL)
        {
                printf("L%d: can't mul, stack too short", line_number);
                exit(EXIT_FAILURE);
        }
        product = (temp_node->next->n * temp_node->n);
        temp_node->next->n = product;
        temp_node->next->prev = NULL;
        *stack = temp_node->next;
        free(temp_node);
}

/**
 * mod - remainder of devision of the value in 2nd node with value in 1st
 * @stack: linked list
 * @line_number: line number
 * Return: none
 */
void mod(stack_t **stack, unsigned int line_number)
{
        stack_t *temp_node;
        int remainder = 0;

        temp_node = *stack;
	if (temp_node->n == 0)
        {
                printf("L%d: division by zero", line_number);
                exit(EXIT_FAILURE);
        }
        if (temp_node == NULL || temp_node->next == NULL)
        {
                printf("L%d: can't mod, stack too short", line_number);
                exit(EXIT_FAILURE);
        }
        remainder = (temp_node->next->n % temp_node->n);
        temp_node->next->n = remainder;
        temp_node->next->prev = NULL;
        *stack = temp_node->next;
        free(temp_node);
}

/**
 * pchar - prints the character
 * @stack: linked list
 * @line_number: line number
 * Return: none
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node;
	char buffer[20];

	temp_node = *stack;
	if (temp_node == NULL)
        {
                printf("L%d: can't div, stack too short", line_number);
                exit(EXIT_FAILURE);
        }
/*
  itoa(temp_node->n, buffer, 10);*/
	printf("%s", buffer);
}
