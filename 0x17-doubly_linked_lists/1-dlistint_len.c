#include "lists.h"

/**
 * dlistint_len - count the num of nodes in the linked list
 * h: pointer to the beginning of a linked list
 *
 * return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
