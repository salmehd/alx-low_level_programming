#include "lists.h"

/**
 * free_listp - function that frees a linked list
 * @head: head of a list
 * Return: 0 at success
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *sign;

	if (head != NULL)
	{
		sign = *head;
		while ((temp = sign) != NULL)
		{
			sign = sign->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints a linked list_t
 * @head: head of a list
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *dstl, *new, *add;

	dstl = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = dstl;
		dstl = new;

		add = dstl;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&dstl);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&dstl);
	return (nnodes);
}
