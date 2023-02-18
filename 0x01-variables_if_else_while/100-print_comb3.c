#include <stdio.h>

/**
 * main - a program that prints all posible combination of 2 digits
 *
 * Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i != j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i == 8 && j == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
