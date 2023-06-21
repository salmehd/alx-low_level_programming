#include "main.h"
#include <string.h>
/**
 * *_memset - function that fills a memory
 * @n: byte of memory pointed
 * @s: constant byte
 * @b: memory area pointer
 * Return: return to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)

		s[i] = b;
	return (s);
}
