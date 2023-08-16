#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: input
 * @argv: input
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *e = (char *)main;
	int x;

	if (argc != 2)
		printf("Error\n"), exit(1);
	x = atoi(argv[1]);
	if (x < 0)
		printf("Error\n"), exit(2);

	while (x--)
		printf("%.2hhx%s", *e++, x ? " " : "\n");
	return (0);
}
