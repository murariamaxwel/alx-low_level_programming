#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - combines two strings (concatenation)
 * @s1: one of the strings
 * @s2: the other string
 * Return: pointer to combined string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++; /* add null terminator to length */

	concat = malloc(sizeof(char) * (len1 + len2)); /*allocate memory*/

	if (concat == NULL) /* validation of memory */
		return (NULL);

	i = 0, j = 0;
	while (i < len1) /* concatenation */
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(concat + i) = *(s2 + j);
		i++, j++;
	}

	return (concat);
}
