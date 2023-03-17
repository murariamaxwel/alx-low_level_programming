#include <stdio.h>

/**
 *main - prints hexadecimal characters using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int hexa_letter = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (hexa_letter <= 'f')
	{
		putchar(hexa_letter);
		hexa_letter++;
	}

	putchar('\n');

	return (0);
}
