#include "lists.h"

/**
 * reverse_listint - Entry point
 * @head:input
 *
 * Return:Always 0
 */
listint_t *reverse_listint(listint_t **head)
{
 listint_t *p = NULL;
 listint_t *x = NULL;

 while (*head)
 {
 x = (*head)->next;
 (*head)->next = p;
 p = *head;
 *head = x;
 }

 *head = p;

 return (*head);
}

