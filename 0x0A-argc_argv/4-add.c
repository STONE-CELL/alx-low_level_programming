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
	int sum = 0;
	char *u;

	while (--argc)
	{
		for (u = argv[argc]; *u; u++)
			if (*u < '0' || *u > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
