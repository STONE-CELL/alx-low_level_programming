#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Entry point
 * @head: input
 * @str: input
 *
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
