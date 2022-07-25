#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: Pointer to the file name.
 * @letters: The number of letters to be read and printed.
 *
 * Return: Number of readable and printable numbers.
 * If filename == NULL, 0.
 * If write fails, 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rd = read(file, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (file == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(file);

	return (wr);
}
