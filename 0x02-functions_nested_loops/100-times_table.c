#include "main.h"

/**
 * print_times_table - function that prints n times table
 * @n: n is the number to be multiplied
 *
 * Return: null if n is greater than 15 or less than 0
 *
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
