#include "lists.h"

/**
 * free_list - aim is to free lnkd lst
 * @head: the lnkd lst of concern
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
