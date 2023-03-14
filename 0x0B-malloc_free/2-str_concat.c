#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Result: char a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, len1, len2, len;

	len1 = len2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return;
	}

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	len = len1 + len2;

	result = (char *) malloc((sizeof(char) * len) + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		result[len1 + j] = s2[j];
	}
	result[len] = '\0';

	return (result);
}
