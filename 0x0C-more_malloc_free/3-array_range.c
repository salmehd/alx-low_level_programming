#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: small value of array
 * @max: large value of array
 * Return: If min > max or the function fails - NULL
 */
int *array_range(int min, int max)
{
	int *array, tally, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);
	for (tally = 0; tally < size; tally++)
		array[tally] = min++;

	return (array);
}
