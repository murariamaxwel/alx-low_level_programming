#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the number of characters
 * @s: string to be counted
 * Return: len of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}

/**
 * argstostr - combines all the arguments of the program
 * @ac: represents argc
 * @av: represents the arguments
 * Return: represents a pointer to the array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL) /* validate input */
		return (NULL);

	/* find length to malloc */
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len += (ac + 1); /* adds a space for newlines, null terminator */

	/* allocate memory and free if error */
	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	/* insert each arg into *str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}
