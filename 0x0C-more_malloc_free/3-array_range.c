#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * @min: the starting point of the array values
 * @max: the last value of the array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max) /* validate input */
		return (NULL);

	/* malloc and check for error */
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	/* set values */
	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
