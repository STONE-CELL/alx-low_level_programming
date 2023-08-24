#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Entry point
 * @head:input
 * @str:input
 * Return: Always 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *y;
	unsigned int l = 0;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (y->next)
		y = y->next;

	y->next = n;

	return (n);
}
