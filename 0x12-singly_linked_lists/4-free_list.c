#include "lists.h"
/**
 * free_list - Entry point
 * @head:input
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *i, *r;

	if (!head)
		return;

	i = head;
	while (i)
	{
		r = i->next;
		free(i->str);
		free(i);
		i = r;
	}
}
