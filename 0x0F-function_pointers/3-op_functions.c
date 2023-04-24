#include "3-calc.h"
/**
 * op_add - addition
 * @a: add a
 * @b: add b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction 
 * @a: subtr a
 * @b: subtra b
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - subtraction 
 * @a: multpl a
 * @b: multl b
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: dvd a
 * @b: dvd b
 * Return: result of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - subtraction 
 * @a: subr a
 * @b: subr b
 * Return: result of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
