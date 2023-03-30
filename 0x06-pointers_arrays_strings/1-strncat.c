#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: the destination string
 * @src: source string
 * @n: append n no. of bytes
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
