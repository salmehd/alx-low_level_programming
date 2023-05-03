#include "lists.h"

/**
 * listint_len - function that returns the number of elements linked listint_t
 * @h: linked list
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
