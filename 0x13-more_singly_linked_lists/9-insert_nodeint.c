#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head: value
 * @idx: value
 * @n: value
 * Return: result
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *k, *c = *head;
unsigned int i;
k = malloc(sizeof(listint_t));
if (k == NULL)
return (NULL);
k->n = n;
if (idx == 0)
{
k->next = c;
*head = k;
return (k);
}
for (i = 0 ; i < (idx - 1) ; i++)
{
if (c == NULL || c->next == NULL)
return (NULL);
c = c->next;
}
k->next = c->next;
c->next = k;
return (k);
}
