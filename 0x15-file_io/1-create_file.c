#include "main.h"

/**
 * create_file - Entry point 
 * @filename:input
 * @text_content:input
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, o, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	o = write(fd, text_content, l);

	if (f == -1 || o == -1)
		return (-1);

	close(f);

	return (1);
}

