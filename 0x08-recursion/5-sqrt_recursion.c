#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: first nuumber
 * Return:If n does not have a natural square root, the function is -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (t(n, 0));
}
/**
 * t - find natural square root of a number
 * @n: input
 * @u: second input
 * Return :if u * u > n returns -1
 */
int t(int n, int u)
{
	if (u * u > n)
		return (-1);
	if (u * u == n)
		return (u);
	return (t(n, u + 1));
}
