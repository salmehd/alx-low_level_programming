#include "lists.h"

/**
 * _strlen - function that returns the lenght of a string.
 * @s: Type char pointer
 * Return: Always 0 at success
 */
int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);

}

/**
 * *add_node - function that adds a new node at the beginning of a list_t
 * @head: data of struct node
 * @str:  type of struct
* Return: elements of the str 
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = _strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
