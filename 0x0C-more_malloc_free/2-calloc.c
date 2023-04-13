#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: If nmemb or size is 0,or fails - NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memr;
	char *cata;
	unsigned int reg;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memr = malloc(size * nmemb);

	if (memr == NULL)
		return (NULL);

	cata = memr;

	for (reg = 0; reg < (size * nmemb); reg++)
		cata[reg] = '\0';

	return (memr);
}
