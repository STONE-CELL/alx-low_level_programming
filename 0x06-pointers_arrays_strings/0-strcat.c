#include "main.h"
/**
 * *_strcat - This function appends the src string to the dest string,
 *  overwriting the terminating null byte
 *  @dest: first input
 *  @src: second input
 *  Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
