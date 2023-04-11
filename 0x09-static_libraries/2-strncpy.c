#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: number of bytes to be used.
 *
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int ct_of_byte;

for (ct_of_byte = 0; ct_of_byte < n && src[ct_of_byte] != '\0'; ct_of_byte++)
dest[ct_of_byte] = src[ct_of_byte];

for (; ct_of_byte < n; ct_of_byte++)
dest[ct_of_byte] = '\0';

return (dest);
}
