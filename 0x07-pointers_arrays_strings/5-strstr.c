#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack : input
 * @needle:input
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *k = needle;

		while (*t == *k && *k != '\0')
		{
			t++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}

	return (0);
}
