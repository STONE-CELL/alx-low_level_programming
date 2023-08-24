#include "lists.h"
/**
 * add_node - Entry point
 * @head: input
 * @str: input
 *
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));

	if (!head || !n)
		return (NULL);
	if (str)
	{
		n->str = strdup(str);
		if (!n->str)
		{
			free(n);
			return (NULL);
		}
		n->len = _strlen(n->str);
	}

	n->next = *head;
	*head = n;
	return (n);
}
