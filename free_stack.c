#include "monty.h"
#include <stddef.h>
/**
* free_stack - freeing a doubly linked list
* @head: head_stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
