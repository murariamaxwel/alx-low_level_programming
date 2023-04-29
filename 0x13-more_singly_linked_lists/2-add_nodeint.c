#include "lists.h"

/**
 * add_nodeint - provides a new node to the lst
 * @head: ptr to hd node
 * @n: represents info to add ot new node
 * Return: address of new node (NULL if no address)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /* this code creates new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* set values */

	new_node->next = *head; /* representation of the first node */
	*head = new_node; /* pointing to the new node */

	return (new_node);
}
