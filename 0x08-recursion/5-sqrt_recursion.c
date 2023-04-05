#include "main.h"

/**
 * find_rt - this function finds the square rt of a number that is >= 0
 * @n: number on which to find the squarert
 * @rt: test case
 * Return: the squarert of n
 */

int find_rt(int n, int rt)
{
	if (rt * rt > n)
		return (-1);

	if (rt * rt == n)
		return (rt);

	return (find_rt(n, rt + 1));
}

/**
 * _sqrt_recursion - find the natural square root of n
 * @n: number on which to perform square root
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_rt(n, 0));
}
