#include <stdio.h>

/**
 * main - a Fizzbuzz program
 *
 * Return: Fizzbuzz for multiples of 3 and 5, Fizz for 3, Buzz for 5
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}

		if (num < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
