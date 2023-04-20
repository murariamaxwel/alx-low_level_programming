#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct dt - forms the structure
 * @letter: identifier of the data type
 * @func: pointer to the func
 */
typedef struct dt
{
	char letter;
	void (*func)(va_list);
} datatype;

#endif
