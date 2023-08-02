#include "main.h"
/**
 * is_prime_number -  function that returns values
 * @n : first input
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (l(n, n - 1));
}
/**
 * l - calculate if a number is prime recuslvely
 * @n: input
 * @u: second input
 * Return: 1 if n is prime 0 if not
 */
int l(int n, int u)
{
	if (u == 1)
		return (1);
	if (n % u == 0 && u > 0)
		return (0);
	return (l(n, u - 1));
}

