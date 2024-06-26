#include "lists.h"

/**
 * sum_dlistint - sums all of the data of the linked list
 * head: pointer to the list start
 *
 * return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
