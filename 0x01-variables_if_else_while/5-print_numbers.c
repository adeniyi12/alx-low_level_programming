#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 *
 * Return: 0
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	printf("\n");
	return (0);
}
