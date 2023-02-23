#include "main.h"

/**
 * print_square -  a function that prints a square, followed by a new line.
 * @size: size is the number of squares to be printed
 *
*/

void print_square(int size)
{
	int length;
	int count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (count++ < size)
	{
		for (length = 0; length < size; length++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
