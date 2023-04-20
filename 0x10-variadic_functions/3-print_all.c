#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - function that prints a char.
 * @arg: argument to be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * @arg: argument to be printed
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Function that prints a float
 * @arg: argument to be printed
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - Function that prints a string
 * @arg: argument to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Function that prints anything
 * @format: list of types of arg passed to the function
 * @...:  variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0, y = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && (*(format + x) != *(funcs[y].symbol)))
			y++;

		if (y < 4)
		{
			printf("%s", separator);
			funcs[y].print(args);
			separator = ", ";
		}

		x++;
	}

	printf("\n");

	va_end(args);
}
