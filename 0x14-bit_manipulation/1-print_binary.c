#include "main.h"
#include <stdio.h>
/**
 * print_binary - transform int to binary
 * @n: teh int to transform
 * Return: transformed num
 */
void print_binary(unsigned long int n)
{

	unsigned long int n_copy = n, msk = 1;
	int len = 0;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}
	len -= 1;

	if (len > 0) /* take care of msk creation */
		msk = msk << len;

	while (msk > 0) /* manipulating bits */
	{
		if (n & msk)
			_putchar('1');
		else
			_putchar('0');

		msk >>= 1;
	}
}
