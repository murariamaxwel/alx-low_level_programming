#include "lists.h"

/**
 * _strlen - fnd len of str
 * @str: str
 * Return: len
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - add to the end
 * @head: represents the linked list
 * @str: str data
 * Return: add of new add
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp; /* create new nd */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /* checking for mallc errs */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* managing memory for new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* setting node vlaues */
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL) /* ensuring a new nd at teh beginiing */
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
