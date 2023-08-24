#include "lists.h"

/**
 * _strlen - Entry point
 * @s:input
 * Return: Always 0
 */
int _strlen(char *s)
{
	int t = 0;

	if (!s)
		return (0);
	while (*s++)
		t++;
	return (t);
}
/**
 * print_list - Entry point
 * @h : input
 * Return: Always 0
 */
size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		d++;
	}
	return (d);
}
