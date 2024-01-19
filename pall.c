#include "monty.h"
#include <stddef.h>
/**
 * f_pall - prints for stack
 * @head: stack_head
 * @counter: no_used
 * Return: no_return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
