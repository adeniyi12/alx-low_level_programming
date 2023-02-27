#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse.
 * @s: string to be reversed
 *
 * Return: reversed string
*/

void print_rev(char *s)
{
	int i, j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
