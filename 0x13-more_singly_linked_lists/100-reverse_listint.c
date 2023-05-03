#include "lists.h"
/**
 * reverse_listint - function
 * @head: value
 * Return: result
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *a, *b;
if (head == NULL || *head == NULL)
return (NULL);
be = NULL;
while ((*head)->next != NULL)
{
a = (*head)->next;
(*head)->next = b;
b = *head;
*head = a;
}
(*head)->next = b;
return (*head);
}
