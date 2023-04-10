#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program
 * @argc: counts the provided arguments
 * @argv: points to the array of arguments
 * Return: 0 on success completion of the program
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
