#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include "3-calc.h"

/**
 * main - the main function,
 * user the one who provides 2 integers
 * main does the calc through func ptr
 * prints sum, difference, product, dividend, or remainder
 * @argc: counter of arguments
 * @argv: arguments to be counted
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	/* validate input */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* convert input of user to integers */
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(n1, n2)); /* calculate through function ptr */

	return (0);
}
