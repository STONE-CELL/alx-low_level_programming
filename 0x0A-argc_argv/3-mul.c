#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: input
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int o;

	if (argc == 3)
	{
		o = atoi(argv[1] + atoi(argv[2]);
		printf("%d\n", o);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

