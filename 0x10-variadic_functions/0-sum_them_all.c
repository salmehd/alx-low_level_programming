#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its paramters.
 * @n: number of parameters
 * @...: variable to the sum of parameters
 * Return: If n == 0 - 0
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int sign, sum = 0;

	va_start(num, n);

	for (sign = 0; sign < n; sign++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}
