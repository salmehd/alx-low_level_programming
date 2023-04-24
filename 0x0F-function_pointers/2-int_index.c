#include "function_pointers.h"

/**
 * int_index - function that searches for an integers.
 * @array:  array of integers
 * @size: size of the array.
 * @cmp: a pointer to the function to be used to compare values.
 * Return: If no element matches or size <= 0 - -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int sign;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (sign = 0; sign < size; sign++)
	{
		if (cmp(array[sign]) != 0)
			return (sign);
	}

	return (-1);
}
