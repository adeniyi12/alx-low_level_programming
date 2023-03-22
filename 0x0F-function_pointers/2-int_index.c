#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of numbers
 * @size: size of array
 * @cmp: function to be called
 * Return: integer value
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
