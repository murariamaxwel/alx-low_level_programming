#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - uses malloc to allocate memory
 * @b: size of memory to be allocated
 * Return: represents the pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
