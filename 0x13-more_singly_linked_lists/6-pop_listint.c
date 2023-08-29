#include "lists.h"

/**
 * pop_listint - Entry point
 * @head:input
 *
 * Return: the data or 0 if empty
 * 
 */
int pop_listint(listint_t **head)
{
 listint_t *t;
 int m;

 if (!head || !*head)
 return (0);

 m = (*head)->n;
 t = (*head)->next;
 free(*head);
 *head = t;

 return (m);
}

