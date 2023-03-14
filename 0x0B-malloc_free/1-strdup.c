#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: char
*/

char *_strdup(char *str)
{
	char *str_copy;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	str_copy = (char *) malloc((sizeof(char) * len) + 1);

	if (str_copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		str_copy[i] = str[i];
	}
	str_copy[len] = '\0';

	return (str_copy);
}
