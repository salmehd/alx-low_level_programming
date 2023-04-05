#include "main.h"

/**
 * search - search for input integer is a prime number
 * @i: otherwise
 * @j: return
 * Return: return 1 if n is a prime numer and 0 if it is not
 */
int search(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (search(i + 1, j));
}

/**
 * is_prime_number -  a function that returns 1 if  integer is a prime number
 * @n:prime number
 * Return:return 1 at success and 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (search(2, n));
}


