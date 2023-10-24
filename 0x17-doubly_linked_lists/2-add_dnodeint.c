#include "lists.h"

/**
 * add_dnodeint - Entry point
 *
 * @head: input
 * @n:input
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *w;
	dlistint_t *i;

	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);

	w->n = n;
	w->prev = NULL;
	i = *head;

	if (i != NULL)
	{
		while (i->prev != NULL)
			i = i->prev;
	}

	w->next = i;

	if (i != NULL)
		i->prev = w;

	*head = w;

	return (w);
}
