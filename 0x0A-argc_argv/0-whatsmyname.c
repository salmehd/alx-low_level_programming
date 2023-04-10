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
	{
		printf("%s\n", argv[argc - 1]);

		return (0);
	}
}
