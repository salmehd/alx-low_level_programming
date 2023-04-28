#include "lists.h"

/**
 * print_list - function that print all the elements of a list_t list
 * @h: pointer of struct
 * Return: number of nudes
 */

size_t print_list(const list_t *h)
{
	size_t sign;
	const list_t *tmp;

	sign = 0;
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			tmp = tmp->next;
			sign++;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			sign++;
		}
	}
	return (sign);
}
