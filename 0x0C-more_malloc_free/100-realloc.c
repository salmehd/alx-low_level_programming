#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size:  size in bytes of the allocated space for ptr
 * @new_size:  size in bytes for new memory block
 * Return: if new_size == old_size - ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memr;
	char *ptr_copy, *check;
	unsigned int data;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memr = malloc(new_size);

		if (memr == NULL)
			return (NULL);

		return (memr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	memr = malloc(sizeof(*ptr_copy) * new_size);

	if (memr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	check = memr;

	for (data = 0; data < old_size && data < new_size; data++)
		check[data] = *ptr_copy++;

	free(ptr);
	return (memr);
}
