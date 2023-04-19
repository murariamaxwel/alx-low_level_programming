#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print the operation codes
 * @argc: represents num of args
 * @argv: represents no of bytes
 *
 * Return: 0 on success, Print Error for errors, exit value 1 if
 * incorrect # of args, exit value 2 if number of bytes is negative
 */
int main(int argc, char *argv[])
{
	char *add;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	add = (char *)&main;
	bytes = atoi(argv[1]);
	i = 0;
	while (i < bytes - 1)
	{
		printf("%02hhx ", add[i]);
		i++;
	}
	printf("%02hhx\n", add[i]);
	return (0);
}
