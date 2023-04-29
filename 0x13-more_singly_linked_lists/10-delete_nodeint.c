#include "lists.h"

/**
 * delete_nodeint_at_index - eliminate node at specified idx
 * @hd: ptr to hd ptr
 * @index: idx of nd to eliminate
 * Return: 1 for success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **hd, unsigned int index)
{

	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	/* case for lst without values */
	if (*hd == NULL)
		return (-1);

	tmp = *hd;

	/* case for node at start of lst */
	if (index == 0)
	{
		*hd = tmp->next;
		free(tmp);
		return (1);
	}

	/* mv to the specified idx */
	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	/* case for idx out of range */
	if (i != (index - 1) || tmp->next == NULL)
		return (-1);

	/* lnk to prior idx */
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);

	return (1);
}
