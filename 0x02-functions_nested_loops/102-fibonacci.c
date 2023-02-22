#include <stdio.h>

/**
 * main - a program that prints the first 50 fibonnaci seq
 *
 * Return: sequence
*/

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib, i;

	printf("%d, %d, ", fib1, fib2);

	for (i = 2; i < 50; i++)
	{
		fib = fib1 + fib2;
		printf("%d, ", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	printf("\n");
	return (0);
}
