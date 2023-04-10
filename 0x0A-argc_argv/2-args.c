#include <stdio.h>
#include "main.h"

/**
 * main - prints each argument passed to program on a new line
 * @argc: counts the number of arguments passed
 * @argv: pointer to the array of arguments
 * Return: on success, return 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
