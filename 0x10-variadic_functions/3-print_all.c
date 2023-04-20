#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - displays char args
 * @valist: variadic lst
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - displays ints
 * @valist: variadic lst
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - displays floats
 * @valist: var lst of floats
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - displays str
 * @valist: var lst of str
 */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - displays shifting strs, floats, ints
 * @format: an array of chars showing data type
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list valist;

	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	/* iterate format; if datatype matched, access function via struct */
	va_start(valist, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(valist); /*access va_arg later*/
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(valist);
	printf("\n");
}
