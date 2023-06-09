#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> /* size_t, printf */
#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */

/**
 * struct list_s - singly linked list
 * @str: string - (mallo str)
 * @len: len of str
 * @next: ptr to nxt nd
 *
 * Description: singly l lst for project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
