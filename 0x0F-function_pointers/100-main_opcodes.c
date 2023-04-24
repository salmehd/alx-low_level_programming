#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own function.
 * @argc:   number of arguments
 * @argv:     array of pointers to the arguments
 * Return: Always 0 at success
 */

int main(int argc, char *argv[])
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (j = 0; j < atoi(argv[1]) - 1; j++)
		printf("%02hhx ", ((char *)main)[j]);
	printf("%02hhx\n", ((char *)main)[j]);
	return (0);
}
