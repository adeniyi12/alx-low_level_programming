#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: unsigned int
 * Return: 98
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
