#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array of integers
 * @size: size of array
 * @action: function to be called
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
