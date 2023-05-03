#include "lists.h"

/**
 * sum_listint - function that returnssums all data (n) of a listint_t linked
 * @head: address to linked list
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	unsigned int i;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
