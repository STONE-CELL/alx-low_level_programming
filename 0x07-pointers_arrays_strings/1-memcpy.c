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
	 int v = 0;
	 int x = n;

	for (; v < x; v++)
	{
		dest[v] = src[v];
		n--;
	}

	return (dest);
}
