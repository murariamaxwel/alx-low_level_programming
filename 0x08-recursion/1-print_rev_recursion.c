#include "main.h"

/**
 * _print_rev_recursion - this function takes a string and prints it in reverse
 * @s: represents the string to be called by the funtion
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
