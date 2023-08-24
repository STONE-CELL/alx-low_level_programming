#include "lists.h"
/**
 * add_node_end - Entry point
 * @head:input
 * @str:input
 * Return: Always 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *b = malloc(sizeof(list_t));
	list_t *y = *head;

	if (!head || !b)
		return (NULL);
	if (str)
	{
		b->str = strdup(str);
		if (!b->str)
		{
			free(b);
			return (NULL);
		}
		b->len = _strlen(b->str);

	}
	if (y)
	{
		while (y->next)
			y = y->next;
		y->next = b;
	}
	else
		*head = b;
	return (b);
}
