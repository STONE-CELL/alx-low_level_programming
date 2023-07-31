#include "main.h"
/**
 * _memcpy -  a function that copies memory area
 * @dest: first input
 * @src: second input
 * @n: is integer
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; g < n; t++)
	{
		dest[t] = src[t];
	}

	return (dest);
}
