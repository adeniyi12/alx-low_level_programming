#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: double pointer to the head of linked list
 * @n: value to be added to new node
 * Return: address of the new element, or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
