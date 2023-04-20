#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers
 * @separator: string to be printed between numbers.
 * @n:        number of integers passed to the function.
 * @...:  variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int sign;

	va_start(num, n);

	for (sign = 0; sign < n; sign++)
	{
		printf("%d", va_arg(num, int));

		if (sign != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
