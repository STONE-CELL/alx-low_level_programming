#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * 
 * @head:input
 * @idx:input
 * @n:input
 *
 * Return: pointer , or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 unsigned int o;
 listint_t *w;
 listint_t *t = *head;

 w = malloc(sizeof(listint_t));
 if (!w || !head)
 return (NULL);

 w->n = n;
 w->next = NULL;

 if (idx == 0)
 {
 w->next = *head;
 *head = w;
 return (w);
 }

 for (o = 0; t && o < idx; o++)
 {
 if (o == idx - 1)
 {
 w->next = t->next;
 t->next = w;
 return (w);
 }
 else
 t = t->next;
 }

 return (NULL);
}

