#include "main.h"

/**
 * _isupper - a function that checks for uppercase
 * @c: c is the character to be checked
 *
 * Return: 1 if c is uppercase and 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
