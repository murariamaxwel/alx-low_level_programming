include "main.h"
/**
 * wildcmp - uses a wildcard to compare if strings match
 * @s1: one of the strings to be compared
 * @s2: the second string
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	else if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s2 == '*')
		wildcmp(s1 + 1, s2);
	else if (*s2 == '*' && *s1 == *(s2 + 1))
		return (wildcmp(s1 + 1, s2 + 1));
	return (wildcmp(s1 + 1, s2 + 1));

}
