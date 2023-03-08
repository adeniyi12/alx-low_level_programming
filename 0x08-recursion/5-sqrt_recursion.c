#include "main.h"

/**
 * check - checks for the square root of a number
 * @i: number
 * @j: number
 * Return: integer
*/

int check(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	if (i * i > j)
	{
		return (-1);
	}
	return (check(i + 1, j));
}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number
 * Return: integer
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check(1, n));
}
