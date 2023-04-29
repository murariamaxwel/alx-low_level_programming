#include "lists.h"

/**
 * get_nodeint_at_indx - return nth node
 * @hd: point to hd ptr
 * @indx: nth node
 * Return: nth node (or NULL)
 */

listint_t *get_nodeint_at_indx(listint_t *hd, unsigned int indx)
{

	unsigned int i = 0;

	if (hd == NULL)
		return (NULL);

	while ((i < indx) && hd != NULL) /* go through lst till end */
	{
		hd = hd->next;
		i++;
	}

	if (i == indx) /* ensure indx is withing limit */
		return (hd);

	return (NULL);
}
