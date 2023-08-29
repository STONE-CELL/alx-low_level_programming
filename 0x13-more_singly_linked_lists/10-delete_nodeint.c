#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head:input
 * @index:input
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
 listint_t *t = *head;
 listint_t *c = NULL;
 unsigned int o = 0;

 if (*head == NULL)
 return (-1);

 if (index == 0)
 {
 *head = (*head)->next;
 free(t);
 return (1);
 }

 while (o < index - 1)
 {
 if (!t || !(t->next))
 return (-1);
 t = t->next;
 o++;
 }


 c = t->next;
 t->next = c->next;
 free(c);

 return (1);
}

