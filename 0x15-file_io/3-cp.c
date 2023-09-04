#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Entry point
 * @file:input
 *
 * Return: Always 0
 */
char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
 * close_file - Entry point
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int v;

	v = close(fd);

	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc:input
 * @argv:input
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int f, t, v, o;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	v = read(f, b, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		o = write(t, b, v);
		if (t == -1 || o == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		v = read(f, b, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (v > 0);

	free(b);
	close_file(f);
	close_file(t);

	return (0);
}

