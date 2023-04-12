#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: content of s1
 * @s2: content of s2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int check, search = 0, memr = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (check = 0; s1[check] || s2[check]; check++)
		memr++;

	concat_str = malloc(sizeof(char) * memr);

	if (concat_str == NULL)
		return (NULL);
	for (check = 0; s1[check]; check++)
		concat_str[search++] = s1[check];

	for (check = 0 ; s2[check]; check++)
		concat_str[search++] = s2[check];

	return (concat_str);
}
