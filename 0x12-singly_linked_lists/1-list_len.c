#include "lists.h"

/**
 * list_len - Entry point
 * @h:input
 *
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		h = h->next;
		u++;
	}
	return (u);
}
