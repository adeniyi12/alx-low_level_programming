#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
			s1_len++;
	}
	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
			s2_len++;
	}
	if (n >= s2_len)
		n = s2_len;

	result = malloc(sizeof(char) * (s1_len + n + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
