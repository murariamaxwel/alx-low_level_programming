#include "lists.h"

/**
 * print_listint - displays the items in a lst
 * @h: list
 * Return: num of prevailing nodes
 */

size_t print_listint(const listint_t *j)
{
	size_t num_nodes = 0;

	while (j != NULL)
	{
		printf("%d\n", j->n); /* provides 0 if no val provided */

		num_nodes += 1;
		j = j->next;
	}

	return (num_nodes);
}
