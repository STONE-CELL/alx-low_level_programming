#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Entry point
 * @filename:input
 * @letters:input
 * Return:0 when function fails or filename is NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t b;
	char u[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = read(f, &u[0], letters);
	b = write(STDOUT_FILENO, &u[0], b);
	close(f);
	return (b);
}

