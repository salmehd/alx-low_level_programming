#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  function that concatenates all the arguments
 * @ac: arguments passed to the program
 * @av: array of pointer of arguments
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, len, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);
	len = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[len++] = av[arg][byte];

		str[len++] = '\n';
	}

			str[size] = '\0';

			return (str);
}

