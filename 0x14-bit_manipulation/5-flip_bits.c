#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: num 2
 * @m: numb 2
 * Return: number of bytes
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbytes;

	for (nbytes = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbytes++;
	}

	return (nbytes);
}
