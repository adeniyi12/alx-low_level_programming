#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings
 * @separator: character to be passed
 * @n: number of strings to be passed
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
		{
			va_arg(ap, char*) = "(nil)";
		}
		printf("%s", va_arg(ap, char*));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
