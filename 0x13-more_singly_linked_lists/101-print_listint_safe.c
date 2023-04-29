#include "lists.h"

/**
 * count_nodes_till_loop - determines the num of unique nodes
 * @hd: ptr to hd ptr
 * Return: num of unique nodes
 */
int count_nodes_till_loop(const listint_t *hd)
{
	int count = 0;
	const listint_t *turtle, *hare;

	turtle = hare = hd;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		count++;

		if (turtle == hare)
		{
			turtle = hd;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * loop - determining existence of a loop
 * @hd: ptr to hd ptr
 * Return: 0 or 1
 */
int loop(const listint_t *hd)
{
	const listint_t *turtle, *hare;

	turtle = hare = hd;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - display a lst with addresses
 * @hd: ptr to hd ptr
 * Return: num of nodes
 */
size_t print_listint_safe(const listint_t *hd)
{
	int count = 0;
	int loop_found;
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (hd == NULL)
		exit(98);

	loop_found = loop(hd);

	if (loop_found == 1) /* print upto last node before loop if loop */
	{
		count = count_nodes_till_loop(hd);
		for (loop_found = 0; loop_found < count; loop_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0) /* carry out regular print */
	{
		tmp = hd;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}

	return (num_nodes);
}
