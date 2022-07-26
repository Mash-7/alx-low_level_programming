#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * file_error - Determinesif files can be opended.
 * @frm: filr_from.
 * @to: file_to.
 * @argv: Array of pointers to the argument.
 */
void file_error(int frm, int to, char *argv[])
{
	if (frm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of pointers to the argument
 *
 * Return: Wrong argument count, exit code with 97.
 * If file_from does not exist, exit code with 98.
 * If file_to cannot be created and/written, exit with code 99.
 * If file descripter cannot be closed, exit with code 100.
 */
int main(int argc, char *argv[])
{
	int frm, to, err;
	char buf[1024];
	ssize_t chars, wr;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	frm = open(arv[1], O_RDONLY);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	file_error(frm, to, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(frm, buf, 1024);
		if (chars == -1)
			file_error(-1, 0, argv);
		wr = write(to, buf, chars);
		if (wr == -1)
			file_error(0, -1, argv);
	}
	err = close(frm);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", frm);
		exit(100);
	}
	err = close(to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
