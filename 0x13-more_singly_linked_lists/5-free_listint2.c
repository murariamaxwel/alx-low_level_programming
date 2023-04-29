#include "lists.h"

/**
 * free_listint2 - makes a lnkd lst free + pts head to NULL
 * @head: lst of concern
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL) /* no ptr case */
		return;

	while (*head != NULL) /* track head node */
	{
		ptr = *head;
		*head = ptr->next; /* going ot the nxt node */
		free(ptr);
	}

}
