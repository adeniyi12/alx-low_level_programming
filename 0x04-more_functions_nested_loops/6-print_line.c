#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: n is the number of lines to be printed
 *
*/

void print_line(int n)
{
	char letter = '_';
	int num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 1; num <= n; num++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
