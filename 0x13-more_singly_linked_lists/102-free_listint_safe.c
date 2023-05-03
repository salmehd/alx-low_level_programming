#include "lists.h"

/**
 * free_listp2 - function that frees a linked list
 * @head: head of a list
 * Return: 0 at success
 */

void free_listp2(listp_t **head)
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
 * free_listint_safe - function that frees a linked list
 * @h: head of a list
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *dstl, *new, *add;
	listint_t *sign;

	dstl = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = dstl;
		dstl = new;

		add = dstl;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&dstl);
				return (nnodes);
			}
		}

		sign = *h;
		*h = (*h)->next;
		free(sign);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&dstl);
	return (nnodes);
}
