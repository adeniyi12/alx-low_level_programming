#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int letter;

	for (letter = 0; letter < argc; letter++)
	{
		printf("%s\n", argv[letter]);
	}
	return (0);
}
