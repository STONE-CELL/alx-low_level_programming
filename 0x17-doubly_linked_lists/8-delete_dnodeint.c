#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry point
 *
 * @head: input
 * @index: input
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *h5;
	unsigned int o;

	h = *head;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	o = 0;

	while (h != NULL)
	{
		if (o == index)
		{
			if (o == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h5->next = h->next;

				if (h->next != NULL)
					h->next->prev = h5;
			}

			free(h);
			return (1);
		}
		h5 = h;
		h = h->next;
		o++;
	}

	return (-1);
}
