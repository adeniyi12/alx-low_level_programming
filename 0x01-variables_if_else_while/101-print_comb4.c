#include <stdio.h>

/**
 * main - a program that prints all possible combinations of three digits
 *
 * Return: 0
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				if (i != j && j != k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i == 7 && j == 8 && k == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
