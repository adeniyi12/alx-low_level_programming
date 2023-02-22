#include <stdio.h>

/**
 * main - a program that prints sum of even num for fib < 4000000
 *
 * Return: sum of even numbers
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fib;
	float sum;

	while (1)
	{
		fib = fib1 + fib2;
		if (fib > 4000000)
		{
			break;
		}

		if ((fib % 2) == 0)
		{
			sum += fib;
		}

		fib1 = fib2;
		fib2 = fib;
	}
	printf("%.0f\n", sum);
	return (0);
}
