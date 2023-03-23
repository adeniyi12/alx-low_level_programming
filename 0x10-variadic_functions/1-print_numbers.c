#include "variadic.functions.h"

/**
 * print_numbers -  a function that prints numbers
 * @separator: character pointer
 * @n: number of values to be passed
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
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
		if (i < n - 1)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	va_end(ap);
	printf("\n");
}
