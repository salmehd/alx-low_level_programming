#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h:  type of struct
 * Return: elements of the str
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t node = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		node++;
	}
	return (node);
}
