#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: the base number
 * @y: represents the power
 * Return: power of a number, if power is less than 0, returns -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
