#include "main.h"

/**
 * factorial - calculates the factorial of provided number n
 * @n: number on which factorial will be calcualted
 * Return: the calculated factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
