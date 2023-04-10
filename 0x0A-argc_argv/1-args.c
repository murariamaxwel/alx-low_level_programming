#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to program
 * @argc: responsible for counting the arguments
 * @argv: points to the array of arguments
 * Return: on success, return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
