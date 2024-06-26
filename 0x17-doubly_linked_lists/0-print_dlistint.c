#include "lists.h"
#include <stdio.h>

/**
 * print_d_t - print all the elements of a d_t list
 * h: pointer to the start of the linked list
 *
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
