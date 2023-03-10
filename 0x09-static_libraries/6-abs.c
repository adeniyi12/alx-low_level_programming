#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @num: int to be checked
 *
 * Return: absolute value of num
*/

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (-num);
	}
}
