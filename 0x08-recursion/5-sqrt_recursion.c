#include "main.h"
/**
 * search - search for the natural square root
 * @i: square root of a number
 * @j: natural square
 * Return:If n does not have a root, the function should return -1
 */

int search(int i, int j)
{
	if (i * i > j)
		return (-1);
	if (i * i == j)
		return (i);
	return (search(i + 1, j));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: square
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (search(1, n));
}

