#include "lists.h"

/**
 * print_listint - Entry point
 * @h:input
 *
 * Return:Always 0
 */
size_t print_listint(const listint_t *h)
{
 size_t u = 0;

 while (h)
 {
 printf("%d\n", h->n);
 u++;
 h = h->next;
 }

 return (u);
}

