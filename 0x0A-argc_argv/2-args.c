#include "main.h"
#include <stdio.h>
/**
 * main -  a program that prints argument pass to it
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 at success
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}

