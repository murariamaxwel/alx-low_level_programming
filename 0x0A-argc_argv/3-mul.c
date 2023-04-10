#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the product of argument numbers
 * @argc: counts the number of arguments
 * @argv: represents the numbers to multiply
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{

	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* mulitply some two args passed via command line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
