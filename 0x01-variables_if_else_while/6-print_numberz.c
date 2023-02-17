#include <stdio.h>

/**
 * main - a program that prints all single digit of all numbers using put
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
	putchar('\n');
	return (0);
}
