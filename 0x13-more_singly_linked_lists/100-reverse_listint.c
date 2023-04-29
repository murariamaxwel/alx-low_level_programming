#include "lists.h"

/**
 * reverse_listint - display lnkd lst in reverse
 * @hd: ptr to hd ptr
 * Return: ptr to 1st node in the new prevailing lst
 */

listint_t *reverse_listint(listint_t **hd)
{
	listint_t *prev, *next;

	/* case for non-existent ptr */
	if (hd == NULL || *hd == NULL)
		return (NULL);

	/* carry out iteration */
	prev = NULL;
	while (*hd != NULL)
	{
		next = (*hd)->next; /* have some track */
		(*hd)->next = prev; /* ptr to prev */
		prev = *hd; /* carry out an update */
		*hd = next; /* move current to nxt */
	}
	(*hd) = prev; /* modify the last element as appropriate */

	return (*hd);
}
