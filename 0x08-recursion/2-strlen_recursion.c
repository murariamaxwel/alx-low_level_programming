#include "main.h"

/**
 * _strlen_recursion - this funciton returns the length of a string
 * @s: string used by the function call
 * Return: lenght of the string 
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
