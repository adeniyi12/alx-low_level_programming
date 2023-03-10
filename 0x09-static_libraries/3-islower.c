#include "main.h"

/**
 * _islower - function that checks for lower case
 * @c: c is the  character to be checked
 *
 * Return: 1 if true 0 if otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
