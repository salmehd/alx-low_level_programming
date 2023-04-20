#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its paramters.
 * @n: number of parameters
 * @...: variable parameters
 * Return: If n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int sign, sum = 0;

	va_start(nums, n);

	for (sign = 0; sign < n; sign++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
