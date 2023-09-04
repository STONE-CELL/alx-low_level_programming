#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename:input
 * @text_content:input
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, o, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	o = write(p, text_content, l);

	if (p == -1 || o == -1)
		return (-1);

	close(p);

	return (1);
}

