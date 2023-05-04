#include "main.h"

/**
 * clear_bit - carry out bit clearing
 * @n: represents the num
 * @index: represents indx
 * Return: 1 if success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int msk = 1;

	/* ensure that msk is withing appropriate range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* proper masking */
	msk = ~(msk << index);
	*n = (*n & msk);

	return (1);
}
