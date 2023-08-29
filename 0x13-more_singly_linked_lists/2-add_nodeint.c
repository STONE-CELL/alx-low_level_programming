#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head:input
 * @n:input
 *
 * Return: pointer if node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t *n;

 e = malloc(sizeof(listint_t));
 if (!e)
 return (NULL);

 e->n = n;
 e->next = *head;
 *head = e;

 return (e);
}

