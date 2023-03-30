#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: one of the strings
 * @s2: the other string
 * Return: int representing num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + 8))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
