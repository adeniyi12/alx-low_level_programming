#include "main.h"

/**
 * more_numbers - a function that prints 10 times the number from 0 to 14
 *
*/

void more_numbers(void)
{
	int num;
	int count = 0;

	while (count++ <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
