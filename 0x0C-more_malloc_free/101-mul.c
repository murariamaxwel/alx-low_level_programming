#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two +ve numbers
 * @argc: represents the number of arguments
 * @argv: pointer to args
 * Return: status of int
 */
int main(int argc, char *argv[])
{
	unsigned int n1, n2, result;

	int j = 1;

	if (argc != 3)
	{
		print_string("Error in args\n");
		exit(98);
	}

	while (j < argc)
	{
		if (only_nums(argv[j]) == 0)
		{
			print_string("Error in digits\n");
			exit(98);
		}
		j++;
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;
	print_int(result);
	_putchar('\n');
	return (0);
}
/**
 * only_nums - checks for symbols that are non-digit
 * @s: string
 * Return: 1 if test passed 0 otherwise
 */
int only_nums(char *s)
{
	int c = 0;

	while (*(s + c) != 0)
	{
		if (*(s + c) < 48 || *(s + c) > 57)
		{
			return (0);
		}
		c++;
	}
	if (c == 0)
		return (0);
	return (1);
}
/**
 * _atoi - turns to an int value
 * Return: the transformed str
 * @s: string to be transformed
 */
int _atoi(char *s)
{
	int size = 0, i, j, sign = 1;

	int number = 0;

	while (s[size] != 0)
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			int pow = 1;

			j = i;
			while (s[j] >= 48 && s[j] <= 57)
			{
				j++;
			}
			j--;
			while (j >= i)
			{
				number += (s[j] - '0') * pow;
				pow *= 10;
				j--;
			}
			break;
		}
		else if (s[i] == 45)
			sign = -sign;
	}
	if (sign < 0)
		number = -number;
	return (number);
}
/**
 * print_string - prints string with putchar
 * @s: string to be printed
 * Return: nothing
 */
void print_string(char s[])
{
	int c = 0;

	while (s[c] != 0)
	{
		_putchar(s[c]);
		c++;
	}
}
/**
 * print_int - prints integer
 * @n: integer to be printed
 */
void print_int(unsigned int n)
{
	if (n / 10)
		print_int(n / 10);
	_putchar(n % 10 + '0');
}
