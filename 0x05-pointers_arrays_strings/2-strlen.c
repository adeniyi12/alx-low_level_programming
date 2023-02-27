#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: length of string to be returned
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int count = 0;

	for (; *s++;)
	{
		count++;
	}
	return (count);
}
