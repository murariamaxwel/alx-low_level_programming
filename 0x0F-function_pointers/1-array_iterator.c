#include <stddef.h>
/* defines the size t */

/**
 * array_iterator - uses back calling to execute a function
 * @array: represents and array
 * @size: represents the size of the array
 * @action: points to function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
