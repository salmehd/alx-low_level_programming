#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: return
 * Return: -1
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
