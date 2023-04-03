#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the elements in a linked list
 * @h: nodes to be counted
 * Return: int of size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
