#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initialize with a specific char
 * @size: represents the size of array
 * @c: fills array with thsi char value
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0) /* validate size input */
		return (NULL);
	arr = malloc(sizeof(char) * size); /* allocate memory */

	if (arr == NULL) /* validate memory */
		return (NULL);

	while (i < (int)size) /* set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
