#include <stdarg.h> /* va_* */
#include <stdio.h> /* printf */
#include "variadic_functions.h"

/**
 * print_numbers - display an unidentified no of num args
 * @separator: act as the delimiter
 * @n: num of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
