#include "lists.h"

/**
 * sum_listint - calculate sum of values withing lnkd lst
 * @hd: ptr to hd ptr
 * Return: total (or zero)
 */

int sum_listint(listint_t *hd)
{

	int tot = 0;

	while (hd != NULL)
	{
		tot += hd->n;
		hd = hd->next;
	}

	return (tot);
}
