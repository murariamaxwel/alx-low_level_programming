#include "main.h"

/**
 * get_endianness - determines teh storage of the multibyte data
 * Return: the first value in teh storage of multibyte data
 */

int get_endianness(void)
{
	/* provides a hex num holding */
	/* carry out testing for first byte stored */
	/* validation */

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
