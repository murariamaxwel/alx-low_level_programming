#include "main.h"

/**
 * flip_bits - handling of bit flipping
 * @n: represents first num
 * @m: represents second num
 * Return: differing num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	/* xor manipulation */
	difference = n ^ m;

	/* ensure proper shifting */
	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff_bits);
}
