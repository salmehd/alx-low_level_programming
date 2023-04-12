#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in mery
 * @str: new string
 * Return: NULL if str = NUL
 */
char *_strdup(char *str)
{
	char *duplicate;
	int check, memr = 0;

	if (str == NULL)
		return (NULL);

	for (check = 0; str[check]; check++)
		memr++;

	duplicate = malloc(sizeof(char) * (memr + 1));

	if (duplicate == NULL)
		return (NULL);

	for (check = 0; str[check]; check++)
		duplicate[check] = str[check];

	duplicate[memr] = '\0';

	return (duplicate);
}
