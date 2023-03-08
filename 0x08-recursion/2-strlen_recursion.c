#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: integer value of the length
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
