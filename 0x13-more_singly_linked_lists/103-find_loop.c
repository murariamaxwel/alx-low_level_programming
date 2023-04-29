#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Find lp in lst
 * @head: ptr to lst start
 *
 * Return: address of lst start (or null is no lst)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		if (holder < head)
			return (head);
	}
	return (NULL);
}
