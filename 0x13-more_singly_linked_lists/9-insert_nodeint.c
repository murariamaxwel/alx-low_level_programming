#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at specified indx
 * @hd: ptr to hd ptr
 * @idx: where to insert new node
 * @n: data for new node
 * Return: new node's address (or NULL)
 */

listint_t *insert_nodeint_at_index(listint_t **hd, unsigned int idx, int n)
{

	unsigned int j = 0;
	listint_t *new_node, *tmp;

	/* case for NULL ptr */
	if (hd == NULL)
		return (NULL);

	/* memeory mngmt for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* account for idx 0 */
	if (idx == 0)
	{
		new_node->next = *hd;
		*hd = new_node;
		return (new_node);
	}

	/* go to insertion point */
	tmp = *hd;
	while (j < (idx - 1))
	{
		tmp = tmp->next;
		j++;

		if (tmp == NULL) /* case for idx out of range*/
		{
			free(new_node);
			return (NULL);
		}
	}

	/* list lnk */
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
