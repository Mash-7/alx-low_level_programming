#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: On success, 1.
 * On failure or filename == NULL, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file, wr;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	file = open(filename, O_WRONLY | O_APPEND, 0600);
	wr = write(file, text_content, wr);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);
}
