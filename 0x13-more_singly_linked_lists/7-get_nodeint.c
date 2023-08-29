#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head:input
 * @index:input
 *
 * Return: pointer, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 unsigned int o = 0;
 listint_t *t = head;

 while (t && o < index)
 {
 t = t->next;
 o++;
 }

 return (t ? t : NULL);
}

