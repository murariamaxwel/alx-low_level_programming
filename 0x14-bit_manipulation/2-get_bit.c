#include "main.h"

/**
 * get_bit - fetch bit at specified index
 * @n: represents num
 * @index: index to fetch
 * Return: the appropriate bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	/* ensure that index is withing appropriate range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* carry out shifting */
	bit = ((n >> index) & 1);

	return (bit);
}
