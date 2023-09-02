#include "main.h"

/**
 * get_endianness - Entry point
 * Return: 0 if big 1 or small
 */
int get_endianness(void)
{
	unsigned long int o = 1;

	return (*(char *)&o);
}
