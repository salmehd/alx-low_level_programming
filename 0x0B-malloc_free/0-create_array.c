#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: The size of the array
 * @c: char  init
 * Return: NULL if size = 0
 * Otherwise - a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int check;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (check = 0; check < size; check++)
		array[check] = c;

	return (array);
}
