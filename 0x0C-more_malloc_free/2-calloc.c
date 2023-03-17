#include "main.h"

/**
 * _calloc -  a function that allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < (nmemb * size); j++)
	{
		p[j] = 0;
	}

	return (p);
}
