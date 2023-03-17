#include <stdio.h>

/**
 *main - print lowercase and uppercase a-zA-Z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z') /*print lowercases a-z*/
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z') /*print uppercase A-Z*/
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
