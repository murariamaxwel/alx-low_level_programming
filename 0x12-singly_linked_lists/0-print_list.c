#include "lists.h"

/**
 * print_list - displays all elements
 * @j: represents the linked link
 * Return: no of nodes in the linked list
 */

size_t print_list(const list_t *j)
{
	size_t count = 0;

	while (j != NULL)
	{
		if (j->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", j->len, j->str);

		count++;
		j = j->next;
	}

	return (count);
}
