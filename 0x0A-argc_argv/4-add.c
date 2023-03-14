#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error 0 otherwise
*/

int main(int argc, char *argv[])
{
	int num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (num = 1; num < argc; num++)
	{
		char *arg = argv[num];
		int letter;

		for (letter = 0; arg[letter] != '\0'; letter++)
		{
			if (arg[letter] < '0' || arg[letter] > '9')
			{
				printf("Error\n");
				return (-1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
