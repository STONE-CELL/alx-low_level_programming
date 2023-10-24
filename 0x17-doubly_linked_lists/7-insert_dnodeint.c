#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point
 *
 * @h: input
 * @idx:input
 * @n:input
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw;
	dlistint_t *hd;
	unsigned int o;

	nw = NULL;
	if (idx == 0)
		nw = add_dnodeint(h, n);
	else
	{
		hd = *h;
		o = 1;
		if (hd != NULL)
			while (hd->prev != NULL)
				hd = hd->prev;
		while (hd != NULL)
		{
			if (o == idx)
			{
				if (hd->next == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));
					if (nw != NULL)
					{
						nw->n = n;
						nw->next = hd->next;
						nw->prev = hd;
						hd->next->prev = nw;
						hd->next = nw;
					}
				}
				break;
			}
			hd = hd->next;
			o++;
		}
	}

	return (nw);
}
