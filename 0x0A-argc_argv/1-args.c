#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: number count
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
