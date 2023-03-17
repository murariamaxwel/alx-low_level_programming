#include <stdio.h>

/**
 *main - print lowercases in reverse using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
