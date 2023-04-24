#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen -  length of a string.
 * @str: string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copy a string pointed to by src.
 * @dest:  buffer storing the string copied
 * @src:  source string
 * Return:  pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int sign = 0;

	for (sign = 0; src[sign]; sign++)
		dest[sign] = src[sign];

	dest[sign] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name:  name of the dog
 * @age:  age of the dog
 * @owner:  owner of the dog
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}

	dogg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}

	dogg->name = _strcopy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcopy(dogg->owner, owner);

	return (dogg);
}
