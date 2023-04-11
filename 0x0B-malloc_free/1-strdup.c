#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * which contains a copy of the string given as a parameter
 * @str: string to create a copy of
 * Return: represents the pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++; /* lets add a null terminator to length */

	dup_str = malloc(sizeof(char) * len); /* allocate memory */

	if (dup_str == NULL) /* this validates the memory */
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(dup_str + i) = *(str + i);
		i++;
	}

	return (dup_str);
}
