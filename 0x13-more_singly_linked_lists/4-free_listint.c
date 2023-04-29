#include "lists.h"

/**
 * free_listint - takes a linked lst and mks it free
 * @head: lst of concern
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL) /* makign head null */
		return;

	while (head != NULL) /* creating ptr */
	{
		ptr = head;
		head = head->next; /* going to the nxt ptr */
		free(ptr);
	}
}
