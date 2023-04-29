#include "lists.h"

/**
 * listint_len - return num of eles in lst
 * @h: lst of concern
 * Return: num of nodes in the lst
 */

size_t listint_len(const listint_t *j)
{
	size_t num_nodes = 0;

	while (j != NULL)
	{
		num_nodes += 1;
		j = j->next;
	}

	return (num_nodes);
}
