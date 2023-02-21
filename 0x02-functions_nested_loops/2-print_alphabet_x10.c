#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lcase
 *
*/

void print_alphabet_x10(void)
{
	char letter;
	int n = 0;

	while (n++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
