#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0 if true and 1 if false
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
