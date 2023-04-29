#include "lists.h"

/**
 * add_nodeint_end - creation of a new node at lst end
 * @head: ptr to head node
 * @n: info to modify th node
 * Return: address of newly created node (or NULL)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t)); /* creation of new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /* pointing head to NULL */
		*head = new_node;
	else
	{
		tmp = *head; /* creation of temporary ptr */

		while (tmp->next != NULL) /* go through the nodes */
			tmp = tmp->next;
		tmp->next = new_node; /* create a link between lst node and new node */
	}

	return (new_node);
}
