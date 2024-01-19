#include "monty.h"
#include <stddef.h>
/**
 * f_pint - printing the top
 * @head: stack_head
 * @counter: line_number
 * Return: no_return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
