#include "lists.h"

/**
 * find_listint_loop - Entry point
 * @head:input
 *
 * Return: address of node , or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
 listint_t *i = head;
 listint_t *r = head;

 if (!head)
 return (NULL);

 while (i && r && r->next)
 {
 r = r->next->next;
 i = i->next;
 if (r == i)
 {
 i = head;
 while (i != r)
 {
 i = i->next;
 r = r->next;
 }
 return (r);
 }
 }

 return (NULL);
}

