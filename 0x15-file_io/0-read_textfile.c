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
	char *b;
	ssize_t f;
	ssize_t o;
	ssize_t r;
	
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	r = read(f, b, letters);
	o = write(STDOUT_FILENO, b, r);
	
	free(b);
	close(f);
	return (r);
}

