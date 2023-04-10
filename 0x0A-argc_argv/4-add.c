#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include <stdbool.h> /* bool data type */

/**
 * is_num - test each argument in argv to see if its a number
 * @argvv: represents the arguments
 * Return: should return boolean true if provided string contains numbers only
 */

bool is_num(char *argvv)
{
	int i = 0;

	for (i = 0; argvv[i]; i++)
	{
		if (!(argvv[i] >= '0' && argvv[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: represents the argument counter
 * @argv: represents the arguments
 * Return: should return 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	/* validate input */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* check all arguments to add numbers */
	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
