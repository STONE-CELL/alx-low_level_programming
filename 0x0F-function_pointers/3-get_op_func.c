#include "3-calc.h"
/**
 * get_op_func - Entry point
 * @s: input
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int y = 0;

	while (y < 5)
	{
		if (s && s[0] == ops[y].op[0] && !s[1])
			return (ops[y].f);
		y++;
	}

	return (NULL);
}