#include "lists.h"

/**
 * list_len - displays len
 * @h: desired linked lst
 * Return: no of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
