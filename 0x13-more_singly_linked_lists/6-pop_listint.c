#include "lists.h"
/**
 * pop_listint - function
 * @head: value
 * Return: result
 */
int pop_listint(listint_t **head)
{
listint_t *k;
int a;
if (*head == NULL)
return (0);
k = *head;
a = (*head)->n;
*head = (*head)->next;
free(k);
return (a);
}
