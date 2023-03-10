#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: c is the character to be checked
 *
 * Return: 1 if c is lower or upper 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
