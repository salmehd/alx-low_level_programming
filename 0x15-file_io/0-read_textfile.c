#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to the POSIX
 * @filename: filename
 * @letters: number of letters it should print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buff;
	ssize_t no_read, no_write;

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	no_read = read(fl, buff, letters);
	no_write = write(STDOUT_FILENO, buff, no_read);

	if (no_write == -1)
		return (0);

	close(fl);
	free(buff);

	return (no_write);
}
