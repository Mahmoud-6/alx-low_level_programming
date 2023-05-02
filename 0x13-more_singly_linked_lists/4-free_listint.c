#include "lists.h"
/**
 * free_listint - function
 * @head: value
 * Return: NULL
 */
void free_listint(listint_t *head)
{
listint_t *k;
while (head)
{
k = head->next;
free(head);
head = k;
}
}
