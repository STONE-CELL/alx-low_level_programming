#include "lists.h"

/**
 * sum_listint - Entry point
 * @head:input
 *
 * Return:Always 0
 */
int sum_listint(listint_t *head)
{
 int s = 0;
 listint_t *t = head;

 while (t)
 {
 s += t->n;
 t = t->next;
 }

 return (s);
}

