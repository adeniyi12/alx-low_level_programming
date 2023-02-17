#include <stdio.h>

/**
 * main - a program that prints alphabet lowercase in reverse order
 *
 * Return: 0
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
