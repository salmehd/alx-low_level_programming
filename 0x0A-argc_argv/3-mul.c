#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: alway 0 at success
 */
int main(int argc, char *argv[])
{
	int num1, num2, num3;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	num3 = num1 * num2;

	printf("%d\n", num3);

	return (0);
}
