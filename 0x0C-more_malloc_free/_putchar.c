#include "main.h"
#include <unistd.h>
/**
 * _putchar - Entry point
 * @c: charcter
 * Return :on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
