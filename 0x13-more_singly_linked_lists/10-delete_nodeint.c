#include "lists.h"
/**
 * delete_nodeint_at_index - function
 * @head: value
 * @index: value
 * Return: result
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *c = *head;
	unsigned int i;

if (c == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(c);
return (1);
}
for (i = 0; i < (index - 1); i++)
{
if (c->next == NULL)
return (-1);
c = c->next;
}
t = c->next;
c->next = t->next;
free(t);
return (1);
}
