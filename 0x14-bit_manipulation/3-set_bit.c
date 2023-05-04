#include "main.h"

/**
 * set_bit - make bit at a provided index one
 * @n: represents num
 * @index: index for the bin num
 * Return: 1 for success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int msk = 1;

	/* make sure indx is within range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* ensure proper masking is carried out */
	msk <<= index;
	*n = (*n | msk);

	return (1);
}
