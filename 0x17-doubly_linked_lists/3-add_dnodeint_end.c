#include "lists.h"

/**
 * add_dnodeint_end - Entry point
 *
 * @head: input
 * @n:input
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *w;

	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);

	w->n = n;
	w->next = NULL;

	i = *head;

	if (i != NULL)
	{
		while (i->next != NULL)
			i = i->next;
		i->next = w;
	}
	else
	{
		*head = w;
	}

	w->prev = i;

	return (w);
}
