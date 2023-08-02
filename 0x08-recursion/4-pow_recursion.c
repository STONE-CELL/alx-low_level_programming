#include "main.h"
/**
 * _pow_recursion -  function that returns the values
 * @x : first input
 * @y : second input
 * Return:If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	
	return (x * _pow_recursion(x, y - 1));
}
