#include "lists.h"

/**
 * pop_listint - does away with head node + return its data
 * @head: lst of concern
 * Return: data from head node
 */

int pop_listint(listint_t **head)
{
	int dta;
	listint_t *tmp;

	if (*head == NULL) /* case for no lst */
		return (0);

	tmp = *head;

	dta = tmp->n; /* save dta so as to return it */

	*head = tmp->next; /* mk a link betw head and nxt node */
	free(tmp);

	return (dta);

}
