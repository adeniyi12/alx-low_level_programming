#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a c program that prints the last digit of a number
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	printf("Last digit of %d is %d ", n, i);
	if (i > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (i == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
