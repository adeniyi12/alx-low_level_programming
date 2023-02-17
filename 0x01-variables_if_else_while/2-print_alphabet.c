#include <stdio.h>

/**
 * main - a c program that returns list of alphabet using putchar
 *
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
