#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string
 * @dest: copy the source to this buffer
 * @src: item to be copied
 * @n: reprsents bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
