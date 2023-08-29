#include "lists.h"

/**
 * listint_len - Entry point
 * @h:inpyt
 *
 * Return:Always 0
 */
size_t listint_len(const listint_t *h)
{
 size_t u = 0;

 while (h)
 {
 u++;
 h = h->next;
 }

 return (u);
}

