#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - Creates a new file.
 * @filename: Name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: On success, 1.
 * On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, file, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, i);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);
	return (1);
}
