#include "lists.h"

/**
 * free_list - a function that frees a list_t
 * @head:  struct list_t
 * Return: free head
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
