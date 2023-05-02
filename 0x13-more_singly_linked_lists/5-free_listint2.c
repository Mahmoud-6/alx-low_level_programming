#include "lists.h"
/**
 * free_listint2 - function
 * @head: value
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
listint_t *k;
if (*head == NULL)
{
return;
}
while (*head)
{
k = (*head)->next;
free(*head);
*head = k;
}
head = NULL;
}
