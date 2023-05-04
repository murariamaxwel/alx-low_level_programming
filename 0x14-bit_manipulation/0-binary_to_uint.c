#include "main.h"

/**
 * binary_to_uint - transform from bin to u_int
 * @b: the bin figure
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, i;
	unsigned int tot = 0;

	if (b == NULL)
		return (tot);

	/* finding len */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* carrying out iteration */
	/* derive power of 2 */
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (tot);

		if (b[i] == '1')
			tot += (1 * (1 << len));
		i++;
		len--;
	}

	return (tot);
}
