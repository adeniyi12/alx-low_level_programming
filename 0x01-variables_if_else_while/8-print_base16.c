#include <stdio.h>

/**
 * main - a program that prints all numbers of base 16
 *
 * Return: 0
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar('0' + c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
