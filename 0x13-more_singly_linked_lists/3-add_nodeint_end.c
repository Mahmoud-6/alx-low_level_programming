#include "lists.h"
/**
 * add_nodeint_end - function
 * @n: value
 * @head: value
 * Return: result
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *l;
node = malloc(sizeof(listint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->next = NULL;
if (*head == NULL)
{
*head = node;
}
else
{
l = *head;
while (l->next != NULL)
{
l = l->next;
}
l->next = node;
}
return (*head);
}
