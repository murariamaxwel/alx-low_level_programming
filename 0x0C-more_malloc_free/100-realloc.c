#include <stdlib.h>
#include "main.h"

/**
 * _realloc - allocates memory and sets values to zero
 * @ptr: pointer previously allocated memory (malloc(old_size))
 * @old_size: size allocated prior
 * @new_size: the new size
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL) /* free memory if reallocate zero */
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size) /* return ptr ifsame as old size */
		return (ptr);

	if (ptr == NULL) /* malloc new size if ptr is originally null */
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	p = malloc(new_size); /* malloc and check for any errors */
	if (p == NULL)
		return (NULL);

	/* fill up values */
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr); /* free old ptr */

	return (p);
}
