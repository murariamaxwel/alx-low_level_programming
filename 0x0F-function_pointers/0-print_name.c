#include <stdlib.h>

/**
 * print_name - executes a given function
 * @name: represents pointer
 * @f:the function that prints the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
