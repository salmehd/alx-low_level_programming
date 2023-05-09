#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i, fl, txt;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	txt = write(fl, text_content, i);

	if (txt == -1)
		return (-1);

	close(fl);

	return (1);
}
