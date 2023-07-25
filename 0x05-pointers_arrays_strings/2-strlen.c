#include "main.h"
/**
 * _strlen - Returns length of strength
 * @s: string value
 * Return: always 0
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
