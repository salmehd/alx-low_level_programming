#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function thatconcatenates two strings using at
 * @s1:  string 1
 * @s2: string 2
 * @n:  bytes of s2
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, reg;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (reg = 0; s1[reg]; reg++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (reg = 0; s1[reg]; reg++)
		concat[len++] = s1[reg];

	for (reg = 0; s2[reg] && reg < n; reg++)
		concat[len++] = s2[reg];

	concat[len] = '\0';

	return (concat);
}
