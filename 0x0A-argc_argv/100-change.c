#include <stdio.h>
#include <stdlib>
/**
 * main - Entry point
 * @argc : input
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int p, n = 0, m = atoi(argv[1]);
	int c[] = {25, 10, 5, 2, 1};

	for (p = 0; p < 5; p++)
	{
		if (m >= c[p])
		{
			n += m / c[i];
			m = m % c[i];
			if (m % c[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", n);
	}
	else
	{
		printf("Eroor\n");
		return (1);
	}
	return (0);
}
