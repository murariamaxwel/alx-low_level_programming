#include "main.h"

/**
 * compare - compare hd and tl indices to see if they match
 * @hd: index starting from left of string
 * @tl: index starting from right of string and moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *hd, char *tl)
{

	if (hd >= tl)
		return (1);
	if (*hd == *tl)
		return (compare(hd + 1, tl - 1));

	return (0);
}

/**
 * _strlen - find length of string; aids access the last index
 * @s: string to be invoked at function call
 * Return: length of s
 */

int _strlen(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
