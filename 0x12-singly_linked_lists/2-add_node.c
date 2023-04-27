#include "lists.h"

/**
 * _strlen - len of str
 * @str: str
 * Return: len of str
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node - add node
 * @head: lnkd lst
 * @str: dta
 * Return: add new els
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* cr */

	if (str == NULL) /* perform input validation */
		return (NULL);
	if (strdup(str) == NULL) /*check malloc errs */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* memory allocation */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* set nd vls */
	new_node->len = _strlen(str);

	if (head == NULL) /* what does new node point to */
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node; /* let head point to nd */

	return (new_node);
}
