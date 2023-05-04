#include "main.h"

/**
 * binary_to_uint - function that coverts a binary to an unsigned int
 * @b: pointer to the strings of 0 & 1 chars
 * Return: the converted number, or 0 if;
 * there is one or more chars in the string b that is not 0 or 1,
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i, base;
	unsigned int val;

	val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, base = 1; i >= 0; i--, base *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] & 1)
			val += base;
	}

	return (val);
}
