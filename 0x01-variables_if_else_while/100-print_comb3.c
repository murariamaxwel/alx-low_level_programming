#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicate digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int second;
	int first;

	for (first = '0'; first <= '9';
	{
		for (second = (first + 1); second <= '9'; second++)
		{
			putchar(first);
			putchar(second);

			if (first != '8' || second != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

