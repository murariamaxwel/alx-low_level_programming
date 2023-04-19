#include <stddef.h>

/**
 * int_index - utilizes a func pointer to search an int
 * @array: array under scrutiny
 * @size: size of the array under scrutiny
 * @cmp: points to function to execute
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate through array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(*(array + i))) /* if returned true */
			return (i);

	return (-1);

}
